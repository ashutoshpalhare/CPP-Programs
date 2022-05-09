#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    double p, r, t; int n;
    cout << "Enter principal, annual rate (%), years, compounds/year: ";
    if (!(cin >> p >> r >> t >> n) || n <= 0 || t < 0) return 1;
    double amount = p * pow(1.0 + r / (100.0 * n), n * t);
    cout << fixed << setprecision(2) << "Amount = " << amount
         << "\\nCompound interest = " << amount - p << '\\n';
}
