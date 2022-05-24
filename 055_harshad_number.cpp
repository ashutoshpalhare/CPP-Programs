#include <iostream>
using namespace std;
int main(){int n;cout<<"Enter positive integer: ";if(!(cin>>n)||n<=0)return 1;int x=n,sum=0;while(x){sum+=x%10;x/=10;}cout<<(n%sum==0?"Harshad number\\n":"Not a Harshad number\\n");}
