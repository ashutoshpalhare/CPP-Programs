#include <iostream>
using namespace std;
int main() {
    int y; cout << "Enter year: "; if (!(cin >> y)) return 1;
    cout << ((y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
             ? "Leap year\\n" : "Not a leap year\\n");
}
