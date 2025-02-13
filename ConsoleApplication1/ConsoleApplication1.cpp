#include <iostream>
using namespace std;
struct date {
    int day;
    int month;
    int year;
};
bool Datapr(int day, int month, int year); 
int main() {
    setlocale(LC_ALL, "rus");
    date date;
    cout << "Введите дату в формате DD/MM/YYYY: ";
    char s1, s2; 
    cin >> date.day >> s1 >> date.month >> s2 >> date.year; 
    if (Datapr(date.day, date.month, date.year)) {
        cout << "Вы ввели дату: " << date.day << "/" << date.month << "/" << date.year << endl; 
    }
    else {
        cout << "Ошибка: Некорректная дата!" << endl;
    }

    return 0;
}
bool Datapr(int day, int month, int year) {
    if (month < 1 || month > 12) return false;

    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (day < 1 || day > daysInMonth[month - 1]) return false;

    return true;
}