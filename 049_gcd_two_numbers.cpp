#include <iostream>
#include <cstdlib>
using namespace std;
int main(){long long a,b;cout<<"Enter two integers: ";if(!(cin>>a>>b))return 1;a=llabs(a);b=llabs(b);while(b){long long t=b;b=a%b;a=t;}cout<<"GCD = "<<a<<'\\n';}
