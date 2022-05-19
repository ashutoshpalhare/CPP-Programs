#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char ch; cout << "Enter one character: "; if (!(cin >> ch)) return 1;
    unsigned char c = static_cast<unsigned char>(ch);
    if (isalpha(c)) cout << "Alphabet\\n";
    else if (isdigit(c)) cout << "Digit\\n";
    else cout << "Special character\\n";
}
