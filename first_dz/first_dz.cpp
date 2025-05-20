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

    cout << "����� �i������i:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

   
    cout << "\n����i ��������:\n";
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    
    cout << "\n�i�'���i ��������:\n";
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] < 0) {
            cout << arr[i] << " ";
        }
    }
    cout << "(���� �i�'�����, �� ��� �i������i ������ >= 0)\n";

    
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += arr[i];
    }
    cout << "\n���� �������i� ������: " << sum << endl;

    
    double average = sum / (double)SIZE;
    cout << "������ ��������: " << average << endl;

    
    int search;
    cout << "\n����i�� ����� ��� ������: ";
    cin >> search;
    bool found = false;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == search) {
            cout << "����� ��������. I�����: " << i << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "����� �� � �������� �������.\n";
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
    cout << "\n����������� ��������: " << max << endl;
    cout << "�i�i������ ��������: " << min << endl;

   
    cout << "\n����� � ����������� �������:\n";
    for (int i = SIZE - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
