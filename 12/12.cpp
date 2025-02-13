#include <iostream>
using namespace std;

struct fraction {
    int chis;
    int znam;
};

int Nod(int a, int b);
void printFr(const fraction& frac);
void Socrat(fraction& frac);
fraction Op1(const fraction& f1, const fraction& f2);
fraction Op2(const fraction& f1, const fraction& f2);
fraction Op3(const fraction& f1, const fraction& f2);
fraction Op4(const fraction& f1, const fraction& f2);

int main() {
    fraction f1, f2, result;
    char operation, choice;

    do {
        cout << "Введите первую дробь (a/b): ";
        cin >> f1.chis >> f1.znam;
        cout << "Введите операцию (+, -, *, /): ";
        cin >> operation;
        cout << "Введите вторую дробь (c/d): ";
        cin >> f2.chis >> f2.znam;

        switch (operation) {
        case '+': result = Op1(f1, f2); break;
        case '-': result = Op2(f1, f2); break;
        case '*': result = Op3(f1, f2); break;
        case '/': result = Op4(f1, f2); break;
        default:
            cout << "Недопустимая операция!" << endl;
            continue;
        }

        cout << "Результат: ";
        printFr(result);   
        cout << endl;

        cout << "Хотите выполнить еще одну операцию? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
// Функция для нахождения НОД
int Nod(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Функция для вывода дроби
void printFr(const fraction& frac) {
    if (frac.znam == 1) {
        cout << frac.chis;
    }
    else {
        cout << frac.chis << "/" << frac.znam;
    }
}

// Функция для сокращения дроби
void Socrat(fraction& frac) {
    int r = Nod(frac.chis, frac.znam);
    frac.chis /= r; 
    frac.znam /= r; 
}

// Функции для выполнения арифметических операций
fraction Op1(const fraction& f1, const fraction& f2) {
    fraction r;
    r.chis = f1.chis * f2.znam + f1.znam * f2.chis; 
    r.znam = f1.znam * f2.znam; 
    Socrat(r);
    return r;
}

fraction Op2(const fraction& f1, const fraction& f2) {
    fraction r;
    r.chis = f1.chis * f2.znam - f1.znam * f2.chis;
    r.znam = f1.znam * f2.znam;
    Socrat(r);
    return r;
}

fraction Op3(const fraction& f1, const fraction& f2) {
    fraction r;
    r.chis = f1.chis * f2.chis;
    r.znam = f1.znam * f2.znam;
    Socrat(r);
    return r;
}

fraction Op4(const fraction& f1, const fraction& f2) {
    fraction r;
    r.chis = f1.chis * f2.znam;
    r.znam = f1.znam * f2.chis;
    Socrat(r);
    return r;
}