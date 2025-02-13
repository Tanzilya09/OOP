#include <iostream>
using namespace std;

// Функция для нахождения НОД (наибольший общий делитель)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Функция для вывода дроби в виде a/b
void printFraction(int numerator, int denominator) {
    if (denominator == 1) {
        cout << numerator;
    }
    else {
        cout << numerator << "/" << denominator;
    }
}

// Функция для сокращения дроби
void simplify(int& numerator, int& denominator) {
    int commonDivisor = gcd(numerator, denominator);
    numerator /= commonDivisor;
    denominator /= commonDivisor;
}

int main() {
    int a, b, c, d;
    char operation;
    char choice;

    do {
        cout << "Введите первую дробь (a/b): ";
        cin >> a >> b;
        cout << "Введите операцию (+, -, *, /): ";
        cin >> operation;
        cout << "Введите вторую дробь (c/d): ";
        cin >> c >> d;

        int resultNumerator, resultDenominator;

        switch (operation) {
        case '+':
            // Сложение
            resultNumerator = a * d + b * c;
            resultDenominator = b * d;
            break;
        case '-':
            // Вычитание
            resultNumerator = a * d - b * c;
            resultDenominator = b * d;
            break;
        case '*':
            // Умножение
            resultNumerator = a * c;
            resultDenominator = b * d;
            break;
        case '/':
            // Деление
            resultNumerator = a * d;
            resultDenominator = b * c;
            break;
        default:
            cout << "Недопустимая операция!" << endl;
            continue;
        }

        simplify(resultNumerator, resultDenominator);

        cout << "Результат: ";
        printFraction(resultNumerator, resultDenominator);
        cout << endl;

        cout << "Хотите выполнить еще одну операцию? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
