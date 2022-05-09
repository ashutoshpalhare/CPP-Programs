#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char ch; cout << "Enter a character: "; if (!(cin >> ch)) return 1;
    unsigned char c = static_cast<unsigned char>(ch);
    if (isupper(c)) cout << "Uppercase\\n";
    else if (islower(c)) cout << "Lowercase\\n";
    else cout << "Not an alphabetic letter\\n";
}
