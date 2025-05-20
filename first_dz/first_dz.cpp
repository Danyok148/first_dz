#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int ROWS = 5;
    const int COLS = 5;
    int arr[ROWS][COLS];

    srand(time(0)); 

    cout << "�����:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = rand() % 101 - 50;
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    int col;
    cout << "\n����i�� ����� ������� (0 - " << COLS - 1 << "): ";
    cin >> col;
    while (col < 0 || col >= COLS) {
        cout << "���i���. ����i�� �� ���: ";
        cin >> col;
    }
    int maxCol = arr[0][col];
    for (int i = 1; i < ROWS; i++) {
        if (arr[i][col] > maxCol) {
            maxCol = arr[i][col];
        }
    }
    cout << "�������� � ������i " << col << " = " << maxCol << endl;

    int row;
    cout << "\n����i�� ����� ����� (0 - " << ROWS - 1 << "): ";
    cin >> row;
    while (row < 0 || row >= ROWS) {
        cout << "���i���. ����i�� �� ���: ";
        cin >> row;
    }
    int maxRow = arr[row][0];
    for (int j = 1; j < COLS; j++) {
        if (arr[row][j] > maxRow) {
            maxRow = arr[row][j];
        }
    }
    cout << "�������� � ����� " << row << " = " << maxRow << endl;

    cout << "\n����i�� ����� ������� ��� �i�������i�: ";
    cin >> col;
    while (col < 0 || col >= COLS) {
        cout << "���i���. ����i�� �� ���: ";
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
    cout << "���� ���������� � ������i: " << negSum << endl;
    if (posCount > 0) {
        double avgPos = (double)posSum / posCount;
        cout << "������ ���������� � ������i: " << avgPos << endl;
    }
    else {
        cout << "���������� ������� ����.\n";
    }

    int col1, col2;
    cout << "\n����i�� ��� ������ ������i� ��� ���i��: ";
    cin >> col1 >> col2;
    if (col1 >= 0 && col1 < COLS && col2 >= 0 && col2 < COLS) {
        for (int i = 0; i < ROWS; i++) {
            int temp = arr[i][col1];
            arr[i][col1] = arr[i][col2];
            arr[i][col2] = temp;
        }
        cout << "������i ���i����.\n";
    }
    else {
        cout << "����������i ������ ������i�.\n";
    }

    int row1, row2;
    cout << "\n����i�� ��� ������ ����i� ��� ���i��: ";
    cin >> row1 >> row2;
    if (row1 >= 0 && row1 < ROWS && row2 >= 0 && row2 < ROWS) {
        for (int j = 0; j < COLS; j++) {
            int temp = arr[row1][j];
            arr[row1][j] = arr[row2][j];
            arr[row2][j] = temp;
        }
        cout << "����� ���i����.\n";
    }
    else {
        cout << "����������i ������ ����i�.\n";
    }

    int rowRev;
    cout << "\n����i�� ����� ����� ��� �������: ";
    cin >> rowRev;
    if (rowRev >= 0 && rowRev < ROWS) {
        for (int j = 0; j < COLS / 2; j++) {
            int temp = arr[rowRev][j];
            arr[rowRev][j] = arr[rowRev][COLS - 1 - j];
            arr[rowRev][COLS - 1 - j] = temp;
        }
        cout << "����� �����������.\n";
    }
    else {
        cout << "���i���� ����� �����.\n";
    }

    cout << "\n��������� �����:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
