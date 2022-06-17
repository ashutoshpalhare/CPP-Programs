#include <iostream>
using namespace std;
int main(){int n;unsigned long long a=0,b=1;cout<<"Terms (1-93): ";if(!(cin>>n)||n<1||n>93)return 1;for(int i=0;i<n;i++){cout<<a<<' ';auto c=a+b;a=b;b=c;}cout<<'\\n';}
