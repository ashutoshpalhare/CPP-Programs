#include <iostream>
using namespace std;
int main(){int n;cout<<"Enter positive integer: ";if(!(cin>>n)||n<=0)return 1;for(int i=1;i<=n;i++)if(n%i==0)cout<<i<<' ';cout<<'\\n';}
