#include <iostream>
#include <numeric>
#include <cstdlib>
using namespace std;
int main(){long long a,b;cout<<"Enter two integers: ";if(!(cin>>a>>b))return 1;a=llabs(a);b=llabs(b);if(!a||!b)cout<<"LCM = 0\\n";else cout<<"LCM = "<<(a/gcd(a,b))*b<<'\\n';}
