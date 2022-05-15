#include <iostream>
using namespace std;
int main() {
    double a,b; cout << "Enter two numbers: "; if (!(cin >> a >> b)) return 1;
    if (a > b) cout << "Largest = " << a << '\\n';
    else if (b > a) cout << "Largest = " << b << '\\n';
    else cout << "Both are equal.\\n";
}
