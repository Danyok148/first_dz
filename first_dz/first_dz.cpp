#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int ROWS = 5;
    const int COLS = 5;
    int arr[ROWS][COLS];

    srand(time(0)); 

    cout << "Масив:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = rand() % 101 - 50;
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    int col;
    cout << "\nВведiть номер стовпця (0 - " << COLS - 1 << "): ";
    cin >> col;
    while (col < 0 || col >= COLS) {
        cout << "Невiрно. Введiть ще раз: ";
        cin >> col;
    }
    int maxCol = arr[0][col];
    for (int i = 1; i < ROWS; i++) {
        if (arr[i][col] > maxCol) {
            maxCol = arr[i][col];
        }
    }
    cout << "Максимум у стовпцi " << col << " = " << maxCol << endl;

    int row;
    cout << "\nВведiть номер рядка (0 - " << ROWS - 1 << "): ";
    cin >> row;
    while (row < 0 || row >= ROWS) {
        cout << "Невiрно. Введiть ще раз: ";
        cin >> row;
    }
    int maxRow = arr[row][0];
    for (int j = 1; j < COLS; j++) {
        if (arr[row][j] > maxRow) {
            maxRow = arr[row][j];
        }
    }
    cout << "Максимум у рядку " << row << " = " << maxRow << endl;

    cout << "\nВведiть номер стовпця для пiдрахункiв: ";
    cin >> col;
    while (col < 0 || col >= COLS) {
        cout << "Невiрно. Введiть ще раз: ";
        cin >> col;
    }
    int negSum = 0;
    int posSum = 0, posCount = 0;
    for (int i = 0; i < ROWS; i++) {
        if (arr[i][col] < 0) {
            negSum += arr[i][col];
        }
        else {
            posSum += arr[i][col];
            posCount++;
        }
    }
    cout << "Сума негативних у стовпцi: " << negSum << endl;
    if (posCount > 0) {
        double avgPos = (double)posSum / posCount;
        cout << "Середнє позитивних у стовпцi: " << avgPos << endl;
    }
    else {
        cout << "Позитивних значень немає.\n";
    }

    int col1, col2;
    cout << "\nВведiть два номери стовпцiв для обмiну: ";
    cin >> col1 >> col2;
    if (col1 >= 0 && col1 < COLS && col2 >= 0 && col2 < COLS) {
        for (int i = 0; i < ROWS; i++) {
            int temp = arr[i][col1];
            arr[i][col1] = arr[i][col2];
            arr[i][col2] = temp;
        }
        cout << "Стовпцi обмiняно.\n";
    }
    else {
        cout << "Неправильнi номери стовпцiв.\n";
    }

    int row1, row2;
    cout << "\nВведiть два номери рядкiв для обмiну: ";
    cin >> row1 >> row2;
    if (row1 >= 0 && row1 < ROWS && row2 >= 0 && row2 < ROWS) {
        for (int j = 0; j < COLS; j++) {
            int temp = arr[row1][j];
            arr[row1][j] = arr[row2][j];
            arr[row2][j] = temp;
        }
        cout << "Рядки обмiняно.\n";
    }
    else {
        cout << "Неправильнi номери рядкiв.\n";
    }

    int rowRev;
    cout << "\nВведiть номер рядка для реверсу: ";
    cin >> rowRev;
    if (rowRev >= 0 && rowRev < ROWS) {
        for (int j = 0; j < COLS / 2; j++) {
            int temp = arr[rowRev][j];
            arr[rowRev][j] = arr[rowRev][COLS - 1 - j];
            arr[rowRev][COLS - 1 - j] = temp;
        }
        cout << "Рядок реверсовано.\n";
    }
    else {
        cout << "Невiрний номер рядка.\n";
    }

    cout << "\nОновлений масив:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
