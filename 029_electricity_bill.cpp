#include <iostream>
using namespace std;
int main() {
    double u,bill=0; cout << "Enter electricity units: ";
    if (!(cin >> u) || u < 0) return 1;
    if (u <= 100) bill=u*1.5;
    else if (u <= 200) bill=150+(u-100)*2.5;
    else if (u <= 300) bill=400+(u-200)*4.0;
    else bill=800+(u-300)*6.0;
    cout << "Estimated bill = " << bill << " (sample slab rates)\\n";
}
