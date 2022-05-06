#include <iostream>
#include <utility>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two integers: ";
    if (!(cin >> a >> b)) return 1;
    swap(a, b);
    cout << "After swap: a = " << a << ", b = " << b << '\\n';
}
