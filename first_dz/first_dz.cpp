#include <iostream>
#include <windows.h> 
using namespace std;

int main() {
    // 1
    int num1;
    cout << "1. ����i�� ����� >= 1 ��� ����: ";
    cin >> num1;
    while (num1 < 1) {
        cout << "����� �� ���� >= 1. ����i�� �� ���: ";
        cin >> num1;
    }
    int sum = 0;
    for (int i = 0; i <= num1; i++) {
        sum += i;
    }
    cout << "���� �i� 0 �� " << num1 << " = " << sum << endl;

    // 2
    int num2;
    cout << "\n2. ����i�� ����� >= 1 ��� ������i���: ";
    cin >> num2;
    while (num2 < 1) {
        cout << "����� �� ���� >= 1. ����i�� �� ���: ";
        cin >> num2;
    }
    int fact = 1;
    for (int i = 1; i <= num2; i++) {
        fact *= i;
    }
    cout << "������i�� ����� " << num2 << " = " << fact << endl;

    // 3
    int num3;
    cout << "\n3. ����i�� ����� ��� ������i ��������: ";
    cin >> num3;
    for (int i = 1; i <= 10; i++) {
        cout << num3 << " * " << i << " = " << (num3 * i) << endl;
    }

    // 4
    int width;
    cout << "\n4. ����i�� ������ ������������� �i�i� >= 1: ";
    cin >> width;
    while (width < 1) {
        cout << "������ �� ���� >= 1. ����i�� �� ���: ";
        cin >> width;
    }

    // 
    system("Color 1E"); 

    for (int i = 0; i < width; i++) {
        cout << "*";
    }
    cout << endl;

    // 5
    int height;
    cout << "\n5. ����i�� ������ ����������� �i�i� >= 1: ";
    cin >> height;
    while (height < 1) {
        cout << "������ �� ���� >= 1. ����i�� �� ���: ";
        cin >> height;
    }

    
    system("Color 2F"); 

    for (int i = 0; i < height; i++) {
        cout << "*" << endl;
    }

    // 6
    cout << "\n6. ������� �������� �i� 1 �� 10:\n";
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << i << " * " << j << " = " << (i * j) << endl;
        }
    }

    // 7
    cout << "\n7. ��������� ������� �������� (1-9):\n";
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            cout << (i * j);
            if (j < 9) cout << "\t";
        }
        cout << endl;
    }

    return 0;
}
