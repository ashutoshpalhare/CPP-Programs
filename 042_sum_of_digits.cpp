#include <iostream>
using namespace std;
int main(){long long n;cout<<"Enter integer: ";if(!(cin>>n))return 1;unsigned long long x=n<0?0ULL-(unsigned long long)n:(unsigned long long)n;int sum=0;while(x){sum+=x%10;x/=10;}cout<<"Sum of digits = "<<sum<<'\\n';}
