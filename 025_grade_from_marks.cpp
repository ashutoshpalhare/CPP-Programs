#include <iostream>
using namespace std;
int main() {
    double m; cout << "Enter marks (0-100): ";
    if (!(cin >> m) || m < 0 || m > 100) { cout << "Invalid marks\\n"; return 1; }
    if (m >= 90) cout << "Grade A\\n"; else if (m >= 80) cout << "Grade B\\n";
    else if (m >= 70) cout << "Grade C\\n"; else if (m >= 60) cout << "Grade D\\n";
    else if (m >= 40) cout << "Grade E\\n"; else cout << "Grade F\\n";
}
