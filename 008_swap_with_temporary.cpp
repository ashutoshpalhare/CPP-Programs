#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two integers: ";
    if (!(cin >> a >> b)) return 1;
    int temp = a; a = b; b = temp;
    cout << "After swap: a = " << a << ", b = " << b << '\\n';
}
