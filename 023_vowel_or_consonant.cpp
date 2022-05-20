#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char ch; cout << "Enter an alphabet: "; if (!(cin >> ch)) return 1;
    ch = static_cast<char>(tolower(static_cast<unsigned char>(ch)));
    if (ch < 'a' || ch > 'z') cout << "Not an alphabet\\n";
    else cout << (string("aeiou").find(ch) != string::npos ? "Vowel\\n" : "Consonant\\n");
}
