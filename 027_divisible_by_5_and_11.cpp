#include <iostream>
using namespace std;
int main() {
    int n; cout << "Enter an integer: "; if (!(cin >> n)) return 1;
    cout << (n % 5 == 0 && n % 11 == 0 ? "Divisible by both\\n" : "Not divisible by both\\n");
}
