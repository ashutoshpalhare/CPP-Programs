#include <iostream>
using namespace std;
int main(){int n;cout<<"Side length (2-50): ";if(!(cin>>n)||n<2||n>50)return 1;for(int i=1;i<=n;i++){for(int j=1;j<=n;j++)cout<<((i==1||i==n||j==1||j==n)?"* ":"  ");cout<<'\\n';}}
