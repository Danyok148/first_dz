#include <iostream>
using namespace std;

int main() {
    //  1
    int sec;
    cout << "1. Введите время в секундах: ";
    cin >> sec;
    int days = sec / 86400;
    int hours = (sec % 86400) / 3600;
    int minutes = (sec % 3600) / 60;
    int seconds = sec % 60;
    cout << days << " дн., " << hours << " ч., " << minutes << " мин., " << seconds << " сек." << endl;

    //  2
    int d, h, m, s;
    cout << "\n2. Введите дни, часы, минуты, секунды: ";
    cin >> d >> h >> m >> s;
    int totalSec = d * 86400 + h * 3600 + m * 60 + s;
    cout << "Всего секунд: " << totalSec << endl;

    //  3
    double dist, time;
    cout << "\n3. Введите расстояние (км) и время (ч): ";
    cin >> dist >> time;
    double speed = dist / time;
    cout << "Скорость: " << speed << " км/ч" << endl;

    // 4
    int h1, m1, s1, h2, m2, s2;
    cout << "\n4. Введите время начала (ч м с): ";
    cin >> h1 >> m1 >> s1;
    cout << "Введите время конца (ч м с): ";
    cin >> h2 >> m2 >> s2;
    int t1 = h1 * 3600 + m1 * 60 + s1;
    int t2 = h2 * 3600 + m2 * 60 + s2;
    int dur = t2 - t1;
    double cost = (dur / 60.0) * 0.3;
    cout << "Стоимость разговора: " << cost << " грн" << endl;

    //  5
    double uah, usd, eur, rub;
    cout << "\n5. Введите сумму в грн и курсы (доллар, евро, рубль): ";
    cin >> uah >> usd >> eur >> rub;
    int d_usd = uah / usd;
    int d_eur = uah / eur;
    int d_rub = uah / rub;
    double change = uah - d_usd * usd;
    cout << "Можно купить: " << d_usd << " USD, " << d_eur << " EUR, " << d_rub << " RUB\n";
    cout << "Сдача: " << change << " грн" << endl;

    //  6
    int secFromStart;
    cout << "\n6. Введите секунды с начала рабочего дня: ";
    cin >> secFromStart;
    int workDay = 8 * 3600;
    int remaining = workDay - secFromStart;
    int hoursLeft = remaining / 3600;
    cout << "Осталось сидеть: " << hoursLeft << " ч." << endl;


    //  7
    double price;
    int qty;
    double discount;
    cout << "\n7. Введите цену ноутбука, количество и скидку (%): ";
    cin >> price >> qty >> discount;
    double total = price * qty;
    double finalPrice = total - (total * discount / 100);
    cout << "Сумма со скидкой: " << finalPrice << " грн" << endl;

    //  8
    double sales;
    cout << "\n8. Введите сумму продаж менеджера: ";
    cin >> sales;
    double salary = 100 + (sales * 0.05);
    cout << "Зарплата: " << salary << " $" << endl;

    //  9
    double filmSize, netSpeed;
    cout << "\n9. Введите размер фильма (ГБ) и скорость (бит/сек): ";
    cin >> filmSize >> netSpeed;
    double bits = filmSize * 1024 * 1024 * 1024 * 8;
    int secToDownload = bits / netSpeed;
    int h = secToDownload / 3600;
    int m = (secToDownload % 3600) / 60;
    int s_down = secToDownload % 60;
    cout << "Скачивание займет: " << h << " ч. " << m << " мин. " << s_down << " сек.\n";

    // 10
    double flash;
    cout << "\n10. Введите объем флешки (ГБ): ";
    cin >> flash;
    int flashMb = flash * 1024;
    int films = flashMb / 760;
    cout << "На флешку поместится " << films << " фильмов." << endl;

    // 11
    double number;
    cout << "\n11. Введите дробное число: ";
    cin >> number;
    number = (int)(number * 100 + 0.5) / 100.0;
    cout << "Округленное до двух знаков: " << number << endl;

    //  12
    int passed, failed;
    cout << "\n12. Введите кол-во сдавших и должников: ";
    cin >> passed >> failed;
    int totalStud = passed + failed;
    double percPass = (passed * 100.0) / totalStud;
    double percFail = (failed * 100.0) / totalStud;
    cout << "Сдавшие: " << percPass << "%, Должники: " << percFail << "%" << endl;

    //  13
    int daySec;
    cout << "\n13. Введите количество секунд с начала дня: ";
    cin >> daySec;
    int secToMidnight = 86400 - daySec;
    int hh = secToMidnight / 3600;
    int mm = (secToMidnight % 3600) / 60;
    int ss = secToMidnight % 60;
    cout << "До полуночи: " << hh << " ч. " << mm << " мин. " << ss << " сек.\n";

    // 14
    double filmGb;
    cout << "\n14. Введите объем фильма (ГБ): ";
    cin >> filmGb;
    double filmMb = filmGb * 1024;
    int diskettes;
    if ((int)(filmMb * 100) % 144 != 0)
        diskettes = (int)(filmMb / 1.44) + 1;
    else
        diskettes = (int)(filmMb / 1.44);
    cout << "Понадобится дискет: " << diskettes << endl;

    // 15
    double deposit, rate;
    int months;
    cout << "\n15. Введите сумму вклада, срок (мес) и годовую ставку (%): ";
    cin >> deposit >> months >> rate;
    double result = deposit + deposit * (rate / 100.0) / 12 * months;
    cout << "Итоговая сумма: " << result << " грн" << endl;

    return 0;
}
