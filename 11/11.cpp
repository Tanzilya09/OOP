#include <iostream>
using namespace std;

struct Time {
    int hours;   // часы
    int minutes; // минуты
    int seconds; // секунды
};

// Функция для перевода времени в секунды
int toSeconds(const Time& t) {
    return t.hours * 3600 + t.minutes * 60 + t.seconds;
}

// Функция для перевода секунд обратно в формат часов, минут, секунд
Time toTimeFormat(int totalSeconds) {
    Time t;
    t.hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    t.minutes = totalSeconds / 60;
    t.seconds = totalSeconds % 60;
    return t;
}

// Функция для вывода времени в формате 12:59:59
void printTime(const Time& t) {
    cout << t.hours << ":"
        << (t.minutes < 10 ? "0" : "") << t.minutes << ":"
        << (t.seconds < 10 ? "0" : "") << t.seconds << endl;
}

int main() {
    Time t1, t2, result;

    // Ввод первого времени
    cout << "Введите первое время (часы:минуты:секунды): ";
    cin >> t1.hours >> t1.minutes >> t1.seconds;

    // Ввод второго времени
    cout << "Введите второе время (часы:минуты:секунды): ";
    cin >> t2.hours >> t2.minutes >> t2.seconds;

    // Перевод обоих времен в секунды
    int totalSeconds1 = toSeconds(t1);
    int totalSeconds2 = toSeconds(t2);

    // Складываем секунды
    int totalSeconds = totalSeconds1 + totalSeconds2;

    // Переводим сумму секунд обратно в формат времени
    result = toTimeFormat(totalSeconds);

    // Вывод результата
    cout << "Сумма времен: ";
    printTime(result);

    return 0;
}
