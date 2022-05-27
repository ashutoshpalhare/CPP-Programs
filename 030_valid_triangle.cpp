#include <iostream>
using namespace std;
int main() {
    double a,b,c; cout << "Enter three side lengths: ";
    if (!(cin >> a >> b >> c) || a <= 0 || b <= 0 || c <= 0) return 1;
    cout << (a+b>c && a+c>b && b+c>a ? "Valid triangle\\n" : "Invalid triangle\\n");
}
