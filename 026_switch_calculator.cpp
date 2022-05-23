#include <iostream>
using namespace std;
int main() {
    double a,b; char op;
    cout << "Enter expression (e.g. 8 + 2): ";
    if (!(cin >> a >> op >> b)) return 1;
    switch (op) {
        case '+': cout << a+b; break; case '-': cout << a-b; break;
        case '*': cout << a*b; break;
        case '/': if (b == 0) { cout << "Cannot divide by zero"; return 1; } cout << a/b; break;
        default: cout << "Unsupported operator"; return 1;
    }
    cout << '\\n';
}
