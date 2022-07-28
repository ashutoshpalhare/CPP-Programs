#include <iostream>
using namespace std;
unsigned long long fib(int n){if(n<2)return n;return fib(n-1)+fib(n-2);}
int main(){int n;cout<<"Terms (1-40): ";if(!(cin>>n)||n<1||n>40)return 1;for(int i=0;i<n;i++)cout<<fib(i)<<' ';cout<<'\\n';}
