#include <iostream>
using namespace std;
int main(){int n;cout<<"Enter N: ";if(!(cin>>n)||n<1)return 1;for(int i=2;i<=n;i+=2)cout<<i<<' ';cout<<'\\n';}
