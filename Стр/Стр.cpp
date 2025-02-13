#include <iostream>
using namespace std;
struct phone {
    int p1;
    int p2;
    int p3;
};
int main() {
    setlocale(LC_ALL, "rus");   
    phone myNum = { 212, 767, 8900 };
    phone number;
    cout << "Введите код города, номер станции и номер абонента: " << endl;
    cin >> number.p1 >> number.p2 >> number.p3; 

    cout << "Мой номер: (" << myNum.p1 << ") " 
        << myNum.p2 << "-" << myNum.p3 << endl; 
    cout << "Ваш номер: (" << number.p1 << ") " 
        << number.p2 << "-" << number.p3 << endl; 

    return 0;
}
