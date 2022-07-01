#include <iostream>
using namespace std;
int main(){int n;cout<<"Half-height: ";if(!(cin>>n)||n<1||n>25)return 1;for(int i=1;i<=n;i++){for(int s=0;s<n-i;s++)cout<<' ';for(int j=0;j<2*i-1;j++)cout<<'*';cout<<'\\n';}for(int i=n-1;i>=1;i--){for(int s=0;s<n-i;s++)cout<<' ';for(int j=0;j<2*i-1;j++)cout<<'*';cout<<'\\n';}}
