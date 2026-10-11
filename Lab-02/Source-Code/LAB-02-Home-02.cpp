#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter small alphabet: ";
    cin >> ch;
    ch = ch - 32;
    cout << "Uppercase: " << ch << endl;
    return 0;
}