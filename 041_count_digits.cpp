#include <iostream>
using namespace std;
int main(){long long n;cout<<"Enter integer: ";if(!(cin>>n))return 1;unsigned long long x=n<0?0ULL-(unsigned long long)n:(unsigned long long)n;int count=0;do{count++;x/=10;}while(x);cout<<"Digits = "<<count<<'\\n';}
