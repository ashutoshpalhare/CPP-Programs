#include <iostream>
using namespace std;
int main() {
    double a, b;
    cout << "Enter dividend and divisor: ";
    if (!(cin >> a >> b)) return 1;
    if (b == 0) { cout << "Division by zero is not allowed.\\n"; return 1; }
    cout << "Quotient = " << a / b << '\\n';
}
