#include <iostream>
using namespace std;

int main() {
    const int SIZE = 20;
    int arr[SIZE];

    
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < SIZE; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    cout << "Масив Фiбонначi:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

   
    cout << "\nПарнi значення:\n";
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    
    cout << "\nВiд'ємнi значення:\n";
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] < 0) {
            cout << arr[i] << " ";
        }
    }
    cout << "(немає вiд'ємних, бо ряд Фiбонначi завжди >= 0)\n";

    
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += arr[i];
    }
    cout << "\nСума елементiв масиву: " << sum << endl;

    
    double average = sum / (double)SIZE;
    cout << "Середнє значення: " << average << endl;

    
    int search;
    cout << "\nВведiть число для пошуку: ";
    cin >> search;
    bool found = false;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == search) {
            cout << "Число знайдено. Iндекс: " << i << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Числа не є частиною массива.\n";
    }

    
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "\nМаксимальне значення: " << max << endl;
    cout << "Мiнiмальне значення: " << min << endl;

   
    cout << "\nМасив у зворотньому порядку:\n";
    for (int i = SIZE - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
