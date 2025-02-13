#include <iostream>
using namespace std;

struct sterling {
    int funt;   
    int shillings; 
    int pence;     
};

int main() {
    setlocale(LC_ALL, "rus"); 
    double des;  
    sterling oldMoney;     
    cout << "Введите сумму в десятичных фунтах: ";
    cin >> des;


    oldMoney.funt = int(des);  
    double remaining = des - oldMoney.funt; 
    oldMoney.shillings = int(remaining * 20);
    remaining = (remaining * 20) - oldMoney.shillings;  
    oldMoney.pence = int(remaining * 12);
    cout << "Сумма в старой системе: " << oldMoney.funt << " фунтов, "
        << oldMoney.shillings << " шиллингов, " << oldMoney.pence << " пенсов." << endl;

    return 0;
}
