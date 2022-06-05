#include <iostream>
using namespace std;
int main(){int n;unsigned long long f=1;cout<<"Enter N (0-20): ";if(!(cin>>n)||n<0||n>20)return 1;for(int i=2;i<=n;i++)f*=i;cout<<n<<"! = "<<f<<'\\n';}
