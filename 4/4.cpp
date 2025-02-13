#include <iostream>
using namespace std;
struct employee {
    int n;
    float pocob;
};

int main() {
    setlocale(LC_ALL, "rus"); 
    employee emp1, emp2, emp3;

    cout << "Введите номер сотрудника и его пособие: ";
    cin >> emp1.n >> emp1.pocob;
    cout << "Введите номер сотрудника и его пособие: ";
    cin >> emp2.n >> emp2.pocob;
    cout << "Введите номер сотрудника и его пособие: ";
    cin >> emp3.n >> emp3.pocob;

    cout << "Сотрудник 1: Номер = " << emp1.n << ", Пособие = " << emp1.pocob << "\n";
    cout << "Сотрудник 2: Номер = " << emp2.n << ", Пособие = " << emp2.pocob << "\n";
    cout << "Сотрудник 3: Номер = " << emp3.n << ", Пособие = " << emp3.pocob << "\n";

    return 0;
}