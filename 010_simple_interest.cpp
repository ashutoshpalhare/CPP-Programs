#include <iostream>
using namespace std;
int main() {
    double p, r, t;
    cout << "Enter principal, annual rate (%), and time (years): ";
    if (!(cin >> p >> r >> t)) return 1;
    cout << "Simple interest = " << p * r * t / 100.0 << '\\n';
}
