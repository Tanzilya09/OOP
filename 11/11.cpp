#include <iostream>
using namespace std;

struct Time {
    int hours;  
    int minutes; 
    int seconds; 
};

int toSeconds(const Time& t) {
    return t.hours * 3600 + t.minutes * 60 + t.seconds;
}

Time toTimeFormat(int totalSeconds) {
    Time t;
    t.hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    t.minutes = totalSeconds / 60;
    t.seconds = totalSeconds % 60;
    return t;
}

void printTime(const Time& t) {
    cout << t.hours << ":"
        << (t.minutes < 10 ? "0" : "") << t.minutes << ":"
        << (t.seconds < 10 ? "0" : "") << t.seconds << endl;
}

int main() {
    Time t1, t2, result;

    cout << "Введите первое время (часы:минуты:секунды): ";
    cin >> t1.hours >> t1.minutes >> t1.seconds;

    cout << "Введите второе время (часы:минуты:секунды): ";
    cin >> t2.hours >> t2.minutes >> t2.seconds;

    int totalSeconds1 = toSeconds(t1);
    int totalSeconds2 = toSeconds(t2);

    int totalSeconds = totalSeconds1 + totalSeconds2;
    result = toTimeFormat(totalSeconds);
    cout << "Сумма времен: ";
    printTime(result);

    return 0;
}
