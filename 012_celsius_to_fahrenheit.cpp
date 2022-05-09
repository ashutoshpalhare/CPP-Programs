#include <iostream>
using namespace std;
int main() {
    double c; cout << "Temperature in Celsius: ";
    if (!(cin >> c)) return 1;
    cout << "Fahrenheit = " << c * 9.0 / 5.0 + 32.0 << '\\n';
}
