﻿#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    setlocale(LC_ALL, "rus"); 
    Time t1; 
    cout << "Введите время (часы, минуты, секунды): ";
    cin >> t1.hours >> t1.minutes >> t1.seconds; 
     
    long totalSeconds = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
     
    cout << "Общее количество секунд: " << totalSeconds << endl; 
    return 0;
}