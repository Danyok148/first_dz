#include <iostream>
using namespace std;

int main() {
    //  1
    int sec;
    cout << "1. ������� ����� � ��������: ";
    cin >> sec;
    int days = sec / 86400;
    int hours = (sec % 86400) / 3600;
    int minutes = (sec % 3600) / 60;
    int seconds = sec % 60;
    cout << days << " ��., " << hours << " �., " << minutes << " ���., " << seconds << " ���." << endl;

    //  2
    int d, h, m, s;
    cout << "\n2. ������� ���, ����, ������, �������: ";
    cin >> d >> h >> m >> s;
    int totalSec = d * 86400 + h * 3600 + m * 60 + s;
    cout << "����� ������: " << totalSec << endl;

    //  3
    double dist, time;
    cout << "\n3. ������� ���������� (��) � ����� (�): ";
    cin >> dist >> time;
    double speed = dist / time;
    cout << "��������: " << speed << " ��/�" << endl;

    // 4
    int h1, m1, s1, h2, m2, s2;
    cout << "\n4. ������� ����� ������ (� � �): ";
    cin >> h1 >> m1 >> s1;
    cout << "������� ����� ����� (� � �): ";
    cin >> h2 >> m2 >> s2;
    int t1 = h1 * 3600 + m1 * 60 + s1;
    int t2 = h2 * 3600 + m2 * 60 + s2;
    int dur = t2 - t1;
    double cost = (dur / 60.0) * 0.3;
    cout << "��������� ���������: " << cost << " ���" << endl;

    //  5
    double uah, usd, eur, rub;
    cout << "\n5. ������� ����� � ��� � ����� (������, ����, �����): ";
    cin >> uah >> usd >> eur >> rub;
    int d_usd = uah / usd;
    int d_eur = uah / eur;
    int d_rub = uah / rub;
    double change = uah - d_usd * usd;
    cout << "����� ������: " << d_usd << " USD, " << d_eur << " EUR, " << d_rub << " RUB\n";
    cout << "�����: " << change << " ���" << endl;

    //  6
    int secFromStart;
    cout << "\n6. ������� ������� � ������ �������� ���: ";
    cin >> secFromStart;
    int workDay = 8 * 3600;
    int remaining = workDay - secFromStart;
    int hoursLeft = remaining / 3600;
    cout << "�������� ������: " << hoursLeft << " �." << endl;


    //  7
    double price;
    int qty;
    double discount;
    cout << "\n7. ������� ���� ��������, ���������� � ������ (%): ";
    cin >> price >> qty >> discount;
    double total = price * qty;
    double finalPrice = total - (total * discount / 100);
    cout << "����� �� �������: " << finalPrice << " ���" << endl;

    //  8
    double sales;
    cout << "\n8. ������� ����� ������ ���������: ";
    cin >> sales;
    double salary = 100 + (sales * 0.05);
    cout << "��������: " << salary << " $" << endl;

    //  9
    double filmSize, netSpeed;
    cout << "\n9. ������� ������ ������ (��) � �������� (���/���): ";
    cin >> filmSize >> netSpeed;
    double bits = filmSize * 1024 * 1024 * 1024 * 8;
    int secToDownload = bits / netSpeed;
    int h = secToDownload / 3600;
    int m = (secToDownload % 3600) / 60;
    int s_down = secToDownload % 60;
    cout << "���������� ������: " << h << " �. " << m << " ���. " << s_down << " ���.\n";

    // 10
    double flash;
    cout << "\n10. ������� ����� ������ (��): ";
    cin >> flash;
    int flashMb = flash * 1024;
    int films = flashMb / 760;
    cout << "�� ������ ���������� " << films << " �������." << endl;

    // 11
    double number;
    cout << "\n11. ������� ������� �����: ";
    cin >> number;
    number = (int)(number * 100 + 0.5) / 100.0;
    cout << "����������� �� ���� ������: " << number << endl;

    //  12
    int passed, failed;
    cout << "\n12. ������� ���-�� ������� � ���������: ";
    cin >> passed >> failed;
    int totalStud = passed + failed;
    double percPass = (passed * 100.0) / totalStud;
    double percFail = (failed * 100.0) / totalStud;
    cout << "�������: " << percPass << "%, ��������: " << percFail << "%" << endl;

    //  13
    int daySec;
    cout << "\n13. ������� ���������� ������ � ������ ���: ";
    cin >> daySec;
    int secToMidnight = 86400 - daySec;
    int hh = secToMidnight / 3600;
    int mm = (secToMidnight % 3600) / 60;
    int ss = secToMidnight % 60;
    cout << "�� ��������: " << hh << " �. " << mm << " ���. " << ss << " ���.\n";

    // 14
    double filmGb;
    cout << "\n14. ������� ����� ������ (��): ";
    cin >> filmGb;
    double filmMb = filmGb * 1024;
    int diskettes;
    if ((int)(filmMb * 100) % 144 != 0)
        diskettes = (int)(filmMb / 1.44) + 1;
    else
        diskettes = (int)(filmMb / 1.44);
    cout << "����������� ������: " << diskettes << endl;

    // 15
    double deposit, rate;
    int months;
    cout << "\n15. ������� ����� ������, ���� (���) � ������� ������ (%): ";
    cin >> deposit >> months >> rate;
    double result = deposit + deposit * (rate / 100.0) / 12 * months;
    cout << "�������� �����: " << result << " ���" << endl;

    return 0;
}
