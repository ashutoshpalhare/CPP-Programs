#include <iostream>
using namespace std;
int main(){int n;cout<<"Enter non-negative integer: ";if(!(cin>>n)||n<0)return 1;int x=n*n,sum=0;while(x){sum+=x%10;x/=10;}cout<<(sum==n?"Neon number\\n":"Not a Neon number\\n");}
