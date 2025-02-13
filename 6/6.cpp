#include <iostream>
using namespace std;
enum etype { laborer, secretary, manager, accountant, executive, researcher };

int main() {
    setlocale(LC_ALL, "rus"); 
    char ch;
    etype slovo;

    std::cout << "Введите первую букву должности (laborer, secretary, manager, accountant, executive, researcher): ";
    std::cin >> ch;

    switch (ch) {
    case 'l': slovo = laborer; break;
    case 's': slovo = secretary; break;
    case 'm': slovo = manager; break;
    case 'a': slovo = accountant; break;
    case 'e': slovo = executive; break;
    case 'r': slovo = researcher; break;
    default: cout << "Некорректный ввод." << endl; return 1;
    }

    cout << "Полное название должности: ";
    switch (slovo) {
    case laborer: cout << "laborer"; break;
    case secretary: cout << "secretary"; break;
    case manager: cout << "manager"; break;
    case accountant: cout << "accountant"; break;
    case executive: cout << "executive"; break;
    case researcher: cout << "researcher"; break;
    }

    cout << endl;
    return 0;
}
