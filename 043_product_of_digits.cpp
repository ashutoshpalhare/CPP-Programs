#include <iostream>
using namespace std;
int main(){long long n;cout<<"Enter integer: ";if(!(cin>>n))return 1;unsigned long long x=n<0?0ULL-(unsigned long long)n:(unsigned long long)n,p=1;do{p*=x%10;x/=10;}while(x);cout<<"Product of digits = "<<p<<'\\n';}
