#include <iostream>
using namespace std;
int main(){int n;cout<<"Enter integer: ";if(!(cin>>n))return 1;bool p=n>=2;for(int i=2;p&&i<=n/i;i++)if(n%i==0)p=false;cout<<(p?"Prime number\\n":"Not a prime number\\n");}
