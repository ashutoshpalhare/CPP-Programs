#include <iostream>
using namespace std;
int main(){unsigned long long n;cout<<"Enter non-negative integer: ";if(!(cin>>n))return 1;unsigned long long sq=n*n,p=10,x=n;while(x>=10){p*=10;x/=10;}cout<<(sq%p==n?"Automorphic number\\n":"Not an automorphic number\\n");}
