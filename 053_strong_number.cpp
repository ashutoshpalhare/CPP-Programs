#include <iostream>
using namespace std;
int fact(int n){int f=1;for(int i=2;i<=n;i++)f*=i;return f;}
int main(){int n;cout<<"Enter non-negative integer: ";if(!(cin>>n)||n<0)return 1;int x=n,sum=0;do{sum+=fact(x%10);x/=10;}while(x);cout<<(sum==n?"Strong number\\n":"Not a strong number\\n");}
