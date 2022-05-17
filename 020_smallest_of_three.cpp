#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    double a,b,c; cout << "Enter three numbers: ";
    if (!(cin >> a >> b >> c)) return 1;
    cout << "Smallest = " << min({a,b,c}) << '\\n';
}
