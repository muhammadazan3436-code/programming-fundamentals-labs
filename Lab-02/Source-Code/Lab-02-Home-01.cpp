#include <iostream>
using namespace std;
int main() {
    int var1, var2, temp;
    cout << "Enter var1 and var2: ";
    cin >> var1 >> var2;
    
    temp = var1;
    var1 = var2;
    var2 = temp;
    
    cout << "After swapping:" << endl;
    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;
    return 0;
}