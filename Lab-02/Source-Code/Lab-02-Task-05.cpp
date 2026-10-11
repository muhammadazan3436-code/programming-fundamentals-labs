#include <iostream>
using namespace std;
int main() {
    double r, PI = 3.14159;
    cout << "Enter radius: ";
    cin >> r;
    cout << "Area of Circle: " << PI * r * r << endl;

    double l, w;
    cout << "Enter length width: ";
    cin >> l >> w;
    cout << "Area of Rectangle: " << l * w << endl;

    double b, h;
    cout << "Enter base height: ";
    cin >> b >> h;
    cout << "Area of Triangle: " << b * h * 0.5 << endl;
    return 0;
}