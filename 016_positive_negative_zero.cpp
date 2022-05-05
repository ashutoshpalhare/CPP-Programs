#include <iostream>
using namespace std;
int main() {
    double n; cout << "Enter a number: "; if (!(cin >> n)) return 1;
    if (n > 0) cout << "Positive\\n";
    else if (n < 0) cout << "Negative\\n";
    else cout << "Zero\\n";
}
