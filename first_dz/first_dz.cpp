#include <iostream>
#include <windows.h> 
using namespace std;

int main() {
    // 1
    int num1;
    cout << "1. ¬ведiть число >= 1 дл€ суми: ";
    cin >> num1;
    while (num1 < 1) {
        cout << "„исло маЇ бути >= 1. ¬ведiть ще раз: ";
        cin >> num1;
    }
    int sum = 0;
    for (int i = 0; i <= num1; i++) {
        sum += i;
    }
    cout << "—ума вiд 0 до " << num1 << " = " << sum << endl;

    // 2
    int num2;
    cout << "\n2. ¬ведiть число >= 1 дл€ факторiалу: ";
    cin >> num2;
    while (num2 < 1) {
        cout << "„исло маЇ бути >= 1. ¬ведiть ще раз: ";
        cin >> num2;
    }
    int fact = 1;
    for (int i = 1; i <= num2; i++) {
        fact *= i;
    }
    cout << "‘акторiал числа " << num2 << " = " << fact << endl;

    // 3
    int num3;
    cout << "\n3. ¬ведiть число дл€ таблицi множенн€: ";
    cin >> num3;
    for (int i = 1; i <= 10; i++) {
        cout << num3 << " * " << i << " = " << (num3 * i) << endl;
    }

    // 4
    int width;
    cout << "\n4. ¬ведiть ширину горизонтальноњ лiнiњ >= 1: ";
    cin >> width;
    while (width < 1) {
        cout << "Ўирина маЇ бути >= 1. ¬ведiть ще раз: ";
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
    cout << "\n5. ¬ведiть висоту вертикальноњ лiнiњ >= 1: ";
    cin >> height;
    while (height < 1) {
        cout << "¬исота маЇ бути >= 1. ¬ведiть ще раз: ";
        cin >> height;
    }

    
    system("Color 2F"); 

    for (int i = 0; i < height; i++) {
        cout << "*" << endl;
    }

    // 6
    cout << "\n6. “аблиц€ множенн€ вiд 1 до 10:\n";
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << i << " * " << j << " = " << (i * j) << endl;
        }
    }

    // 7
    cout << "\n7.  вадратна таблиц€ множенн€ (1-9):\n";
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            cout << (i * j);
            if (j < 9) cout << "\t";
        }
        cout << endl;
    }

    return 0;
}
