#include <iostream>
using namespace std;
int main() {
    double f; cout << "Temperature in Fahrenheit: ";
    if (!(cin >> f)) return 1;
    cout << "Celsius = " << (f - 32.0) * 5.0 / 9.0 << '\\n';
}
