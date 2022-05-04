#include <iostream>
using namespace std;
int main() {
    long long a, b;
    cout << "Enter two integers: ";
    if (!(cin >> a >> b)) return 1;
    if (b == 0) { cout << "Remainder by zero is undefined.\\n"; return 1; }
    cout << "Remainder = " << a % b << '\\n';
}
