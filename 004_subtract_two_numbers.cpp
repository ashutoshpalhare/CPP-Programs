#include <iostream>
using namespace std;
int main() {
    double a, b;
    cout << "Enter two numbers: ";
    if (!(cin >> a >> b)) return 1;
    cout << "Difference = " << a - b << '\\n';
}
