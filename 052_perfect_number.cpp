#include <iostream>
using namespace std;
int main(){int n,sum=0;cout<<"Enter positive integer: ";if(!(cin>>n)||n<1)return 1;for(int i=1;i<=n/2;i++)if(n%i==0)sum+=i;cout<<(sum==n?"Perfect number\\n":"Not a perfect number\\n");}
