#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // 1
    double a, b, x;
    cout << "1. Введiть a i b: ";
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
    cout << "\n2. Введiть коефiцiєнт нахилу прямої (k): ";
    cin >> k;
    if (k == 0) {
        cout << "Пряма паралельна осi абсцис\n";
    }
    else {
        cout << "Пряма не паралельна осi абсцис\n";
    }

    // 3
    int qty;
    double price, total, discount;
    cout << "\n3. Введiть кiлькiсть товарiв та цiну за одиницю: ";
    cin >> qty >> price;
    total = qty * price;
    discount = 0;
    if (total >= 300) discount = total * 0.07;
    else if (total >= 200) discount = total * 0.05;
    else if (total >= 100) discount = total * 0.03;
    cout << "Знижка: " << discount << endl;

    // 4
    double num;
    cout << "\n4. Введiть дробове число: ";
    cin >> num;
    if (num == (int)num) {
        cout << "Десяткова частина дорiвнює нулю\n";
    }
    else {
        cout << "Є десяткова частина\n";
    }

    // 5
    int day;
    cout << "\n5. Введiть номер дня тижня (1-7): ";
    cin >> day;
    switch (day) {
    case 1: cout << "Понедiлок\n"; break;
    case 2: cout << "Вiвторок\n"; break;
    case 3: cout << "Середа\n"; break;
    case 4: cout << "Четвер\n"; break;
    case 5: cout << "П'ятниця\n"; break;
    case 6: cout << "Субота\n"; break;
    case 7: cout << "Неділя\n"; break;
    default: cout << "Неправильний номер\n";
    }

    // 6
    double x6, y6;
    cout << "\n6. Введiть координати точки (x, y): ";
    cin >> x6 >> y6;
    if (x6 == 0 && y6 == 0) cout << "Точка в початку координат\n";
    else if (x6 == 0) cout << "Точка на осi Y\n";
    else if (y6 == 0) cout << "Точка на осi X\n";
    else if (x6 > 0 && y6 > 0) cout << "I чверть\n";
    else if (x6 < 0 && y6 > 0) cout << "II чверть\n";
    else if (x6 < 0 && y6 < 0) cout << "III чверть\n";
    else cout << "IV чверть\n";

    // 7
    int currency;
    double uah;
    cout << "\n7. Введiть суму в гривнях: ";
    cin >> uah;
    cout << "1 - EUR, 2 - USD, 3 - RUB: ";
    cin >> currency;
    if (currency == 1) cout << "EUR: " << uah / 40 << endl;
    else if (currency == 2) cout << "USD: " << uah / 37 << endl;
    else if (currency == 3) cout << "RUB: " << uah * 2.5 << endl;
    else cout << "Невiдома валюта\n";

    // 8
    int d, m, y, h, min;
    cout << "\n8. Введiть дату (день, мiсяць, рiк): ";
    cin >> d >> m >> y;
    cout << "Введiть час (години, хвилини): ";
    cin >> h >> min;
    if (d >= 1 && d <= 31 && m >= 1 && m <= 12 && y > 0 && h >= 0 && h < 24 && min >= 0 && min < 60)
        cout << "Дата i час коректнi\n";
    else
        cout << "Некоректна дата або час\n";

    // 9
    int ticket;
    cout << "\n9. Введiть номер квитка (6 цифр): ";
    cin >> ticket;
    int sum1 = 0, sum2 = 0;
    sum1 += (ticket / 100000) % 10;
    sum1 += (ticket / 10000) % 10;
    sum1 += (ticket / 1000) % 10;
    sum2 += (ticket / 100) % 10;
    sum2 += (ticket / 10) % 10;
    sum2 += ticket % 10;
    if (sum1 == sum2) cout << "Щасливий квиток\n";
    else cout << "Звичайний квиток\n";

    // 10
    int age;
    cout << "\n10. Введiть вiк: ";
    cin >> age;
    if (age >= 60) cout << "Пора на пенсiю\n";
    else cout << "Ще працювати\n";

    // 11
    int card;
    cout << "\n11. Введiть номер карти (0-35): ";
    cin >> card;
    int rank = card % 9 + 6;
    int suit = card / 9;
    cout << "Карта: ";
    cout << rank;
    if (suit == 0) cout << " пiка\n";
    else if (suit == 1) cout << " хрести\n";
    else if (suit == 2) cout << " бубни\n";
    else if (suit == 3) cout << " черви\n";
    else cout << " невiдома масть\n";

    // 12
    int hour, minute;
    cout << "\n12. Введiть час (години та хвилини): ";
    cin >> hour >> minute;
    if (hour >= 5 && hour < 12) cout << "Доброго ранку\n";
    else if (hour >= 12 && hour < 18) cout << "Добрий день\n";
    else if (hour >= 18 && hour < 22) cout << "Доброго вечора\n";
    else cout << "Доброї ночi\n";

    // 13
    double height, weight, ideal;
    cout << "\n13. Введiть рiст i вагу: ";
    cin >> height >> weight;
    ideal = height - 110;
    if (weight > ideal) cout << "Потрiбно схуднути на " << weight - ideal << " кг\n";
    else if (weight < ideal) cout << "Потрiбно набрати " << ideal - weight << " кг\n";
    else cout << "Ви маєте iдеальну вагу\n";

    // 14
    int dd, mm, yy;
    cout << "\n14. Введiть дату (день, мiсяць, рiк): ";
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
    cout << "Наступна дата: " << dd << "." << mm << "." << yy << endl;

    // 15
    int number15, temp15, digit15, isAllPrime = 1;
    cout << "\n15. Введiть п’ятизначне число: ";
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
    if (isAllPrime) cout << "Число складається з простих цифр\n";
    else cout << "Є непроста цифра\n";

    // 16
    int year16;
    cout << "\n16. Введiть рiк: ";
    cin >> year16;
    if ((year16 % 4 == 0 && year16 % 100 != 0) || (year16 % 400 == 0)) {
        cout << "Рiк високосний\n";
    }
    else {
        cout << "Рiк не високосний\n";
    }

    return 0;
}
