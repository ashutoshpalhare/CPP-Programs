#include <iostream>
using namespace std;
int main() {
    const double PI = 3.141592653589793;
    double r; cout << "Enter radius: ";
    if (!(cin >> r) || r < 0) return 1;
    cout << "Area = " << PI * r * r
         << "\\nCircumference = " << 2 * PI * r << '\\n';
}
