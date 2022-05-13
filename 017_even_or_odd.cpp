#include <iostream>
using namespace std;
int main() {
    long long n; cout << "Enter an integer: "; if (!(cin >> n)) return 1;
    cout << (n % 2 == 0 ? "Even\\n" : "Odd\\n");
}
