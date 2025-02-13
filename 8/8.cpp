#include <iostream>
using namespace std;

struct fraction {
    int chis;   
    int znam; 
};
int nod(int a, int b);
void simpl(fraction& frac);
void print(const fraction& frac);

int main() {
    setlocale(LC_ALL, "rus"); 
    fraction f1, f2, r;

    cout << "Введите первую дробь (a/b): ";
    cin >> f1.chis >> f1.znam; 
    cout << "Введите вторую дробь (c/d): ";
    cin >> f2.chis >> f2.znam;    
    r.chis = f1.chis * f2.znam + f1.znam * f2.chis;  
    r.znam = f1.znam * f2.znam;    

    simpl(r);  
    cout << "Сумма равна: ";
    print(r);    
    cout << endl;

    return 0;
}
int nod(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void simpl(fraction& frac) {
    int commonDivisor = nod(frac.chis, frac.znam);
    frac.chis /= commonDivisor;
    frac.znam /= commonDivisor;
}

void print(const fraction& frac) {
    if (frac.znam == 1) {
        cout << frac.chis;
    }
    else {
        cout << frac.chis << "/" << frac.znam;
    }
}
