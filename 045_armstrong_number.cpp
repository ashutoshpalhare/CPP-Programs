#include <iostream>
using namespace std;
int main(){long long n;cout<<"Enter non-negative integer: ";if(!(cin>>n)||n<0)return 1;long long x=n,sum=0;int digits=0;do{digits++;x/=10;}while(x);x=n;do{int d=x%10;long long p=1;for(int i=0;i<digits;i++)p*=d;sum+=p;x/=10;}while(x);cout<<(sum==n?"Armstrong number\\n":"Not an Armstrong number\\n");}
