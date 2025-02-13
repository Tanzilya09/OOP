#include <iostream>
using namespace std;
enum etype { laborer, secretary, manager, accountant, executive, researcher };
struct date {
    int day;
    int month;
    int year;
};

struct employee {
    int n;
    float pocob;
    etype position;
    date hireDate;
};

int main() {
    setlocale(LC_ALL, "rus");
    employee emp[3];

    for (int i = 0; i < 3; i++) {
        char ch;
        cout << "Введите номер сотрудника, зарплату, первую букву должности (l, s, m, a, e, r) и дату в формате DD/MM/YYYY: ";
        cin >> emp[i].n >> emp[i].pocob >> ch;
        char slash1, slash2;
        cin >> emp[i].hireDate.day >> slash1 >> emp[i].hireDate.month >> slash2 >> emp[i].hireDate.year;

        switch (ch) {
        case 'l': emp[i].position = laborer; break;
        case 's': emp[i].position = secretary; break;
        case 'm': emp[i].position = manager; break;
        case 'a': emp[i].position = accountant; break;
        case 'e': emp[i].position = executive; break;
        case 'r': emp[i].position = researcher; break;
        default: cout << "Некорректный ввод." << endl; return 1;
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << "Сотрудник " << i + 1 << ": Номер = " << emp[i].n << ", Пособие = " << emp[i].pocob << "$\n";
        cout << "Дата принятия на работу: " << emp[i].hireDate.day << "/" << emp[i].hireDate.month << "/" << emp[i].hireDate.year << "\n";
        cout << "Должность: ";
        switch (emp[i].position) {
        case laborer: cout << "laborer"; break;
        case secretary: cout << "secretary"; break;
        case manager: cout << "manager"; break;
        case accountant: cout << "accountant"; break;
        case executive: cout << "executive"; break;
        case researcher: cout << "researcher"; break;
        }
        cout << "\n";
    }

    return 0;
}