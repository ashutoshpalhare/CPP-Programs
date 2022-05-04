#include <iostream>
using namespace std;
int main() {
    double length, width; cout << "Enter length and width: ";
    if (!(cin >> length >> width) || length < 0 || width < 0) return 1;
    cout << "Area = " << length * width
         << "\\nPerimeter = " << 2 * (length + width) << '\\n';
}
