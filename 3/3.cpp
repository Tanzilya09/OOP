#include <iostream>
using namespace std;
struct Dis {
    int f;
    float de;
};
struct Volume { 
    Dis length;
    Dis width; 
    Dis height; 
};
float feet(Dis);

int main() {
    setlocale(LC_ALL, "rus"); 
    Volume room = { {10, 6.0}, {12, 4.0}, {8, 2.0} };
    float l = feet(room.length); 
    float w = feet(room.width);
    float h = feet(room.height); 
    float volume = l * w * h;
    cout << "Объем помещения: " << volume << " кубических футов" << endl;

    return 0;
} 
float feet(Dis d) { 
    return d.f + d.de / 12.0;
} 