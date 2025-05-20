#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // 1
    double a, b, x;
    cout << "1. ����i�� a i b: ";
    cin >> a >> b;

    if (a > b) {
        x = b - 5 * a;
    }
    else if (a == b) {
        x = (5 - b) / a;
    }
    else {
        x = (a - 5) / b;
    }
    cout << "X = " << x << endl;

    // 2
    double k;
    cout << "\n2. ����i�� ����i�i��� ������ ����� (k): ";
    cin >> k;
    if (k == 0) {
        cout << "����� ���������� ��i ������\n";
    }
    else {
        cout << "����� �� ���������� ��i ������\n";
    }

    // 3
    int qty;
    double price, total, discount;
    cout << "\n3. ����i�� �i���i��� �����i� �� �i�� �� �������: ";
    cin >> qty >> price;
    total = qty * price;
    discount = 0;
    if (total >= 300) discount = total * 0.07;
    else if (total >= 200) discount = total * 0.05;
    else if (total >= 100) discount = total * 0.03;
    cout << "������: " << discount << endl;

    // 4
    double num;
    cout << "\n4. ����i�� ������� �����: ";
    cin >> num;
    if (num == (int)num) {
        cout << "��������� ������� ���i���� ����\n";
    }
    else {
        cout << "� ��������� �������\n";
    }

    // 5
    int day;
    cout << "\n5. ����i�� ����� ��� ����� (1-7): ";
    cin >> day;
    switch (day) {
    case 1: cout << "�����i���\n"; break;
    case 2: cout << "�i������\n"; break;
    case 3: cout << "������\n"; break;
    case 4: cout << "������\n"; break;
    case 5: cout << "�'������\n"; break;
    case 6: cout << "������\n"; break;
    case 7: cout << "�����\n"; break;
    default: cout << "������������ �����\n";
    }

    // 6
    double x6, y6;
    cout << "\n6. ����i�� ���������� ����� (x, y): ";
    cin >> x6 >> y6;
    if (x6 == 0 && y6 == 0) cout << "����� � ������� ���������\n";
    else if (x6 == 0) cout << "����� �� ��i Y\n";
    else if (y6 == 0) cout << "����� �� ��i X\n";
    else if (x6 > 0 && y6 > 0) cout << "I ������\n";
    else if (x6 < 0 && y6 > 0) cout << "II ������\n";
    else if (x6 < 0 && y6 < 0) cout << "III ������\n";
    else cout << "IV ������\n";

    // 7
    int currency;
    double uah;
    cout << "\n7. ����i�� ���� � �������: ";
    cin >> uah;
    cout << "1 - EUR, 2 - USD, 3 - RUB: ";
    cin >> currency;
    if (currency == 1) cout << "EUR: " << uah / 40 << endl;
    else if (currency == 2) cout << "USD: " << uah / 37 << endl;
    else if (currency == 3) cout << "RUB: " << uah * 2.5 << endl;
    else cout << "���i���� ������\n";

    // 8
    int d, m, y, h, min;
    cout << "\n8. ����i�� ���� (����, �i����, �i�): ";
    cin >> d >> m >> y;
    cout << "����i�� ��� (������, �������): ";
    cin >> h >> min;
    if (d >= 1 && d <= 31 && m >= 1 && m <= 12 && y > 0 && h >= 0 && h < 24 && min >= 0 && min < 60)
        cout << "���� i ��� �������i\n";
    else
        cout << "���������� ���� ��� ���\n";

    // 9
    int ticket;
    cout << "\n9. ����i�� ����� ������ (6 ����): ";
    cin >> ticket;
    int sum1 = 0, sum2 = 0;
    sum1 += (ticket / 100000) % 10;
    sum1 += (ticket / 10000) % 10;
    sum1 += (ticket / 1000) % 10;
    sum2 += (ticket / 100) % 10;
    sum2 += (ticket / 10) % 10;
    sum2 += ticket % 10;
    if (sum1 == sum2) cout << "�������� ������\n";
    else cout << "��������� ������\n";

    // 10
    int age;
    cout << "\n10. ����i�� �i�: ";
    cin >> age;
    if (age >= 60) cout << "���� �� ����i�\n";
    else cout << "�� ���������\n";

    // 11
    int card;
    cout << "\n11. ����i�� ����� ����� (0-35): ";
    cin >> card;
    int rank = card % 9 + 6;
    int suit = card / 9;
    cout << "�����: ";
    cout << rank;
    if (suit == 0) cout << " �i��\n";
    else if (suit == 1) cout << " ������\n";
    else if (suit == 2) cout << " �����\n";
    else if (suit == 3) cout << " �����\n";
    else cout << " ���i���� �����\n";

    // 12
    int hour, minute;
    cout << "\n12. ����i�� ��� (������ �� �������): ";
    cin >> hour >> minute;
    if (hour >= 5 && hour < 12) cout << "������� �����\n";
    else if (hour >= 12 && hour < 18) cout << "������ ����\n";
    else if (hour >= 18 && hour < 22) cout << "������� ������\n";
    else cout << "����� ���i\n";

    // 13
    double height, weight, ideal;
    cout << "\n13. ����i�� �i�� i ����: ";
    cin >> height >> weight;
    ideal = height - 110;
    if (weight > ideal) cout << "����i��� �������� �� " << weight - ideal << " ��\n";
    else if (weight < ideal) cout << "����i��� ������� " << ideal - weight << " ��\n";
    else cout << "�� ���� i������� ����\n";

    // 14
    int dd, mm, yy;
    cout << "\n14. ����i�� ���� (����, �i����, �i�): ";
    cin >> dd >> mm >> yy;
    dd++;
    if ((mm == 2 && dd > 28) || ((mm == 4 || mm == 6 || mm == 9 || mm == 11) && dd > 30) || dd > 31) {
        dd = 1;
        mm++;
    }
    if (mm > 12) {
        mm = 1;
        yy++;
    }
    cout << "�������� ����: " << dd << "." << mm << "." << yy << endl;

    // 15
    int number15, temp15, digit15, isAllPrime = 1;
    cout << "\n15. ����i�� ���������� �����: ";
    cin >> number15;
    temp15 = number15;
    while (temp15 > 0) {
        digit15 = temp15 % 10;
        if (digit15 != 2 && digit15 != 3 && digit15 != 5 && digit15 != 7) {
            isAllPrime = 0;
            break;
        }
        temp15 /= 10;
    }
    if (isAllPrime) cout << "����� ���������� � ������� ����\n";
    else cout << "� �������� �����\n";

    // 16
    int year16;
    cout << "\n16. ����i�� �i�: ";
    cin >> year16;
    if ((year16 % 4 == 0 && year16 % 100 != 0) || (year16 % 400 == 0)) {
        cout << "�i� ����������\n";
    }
    else {
        cout << "�i� �� ����������\n";
    }

    return 0;
}
