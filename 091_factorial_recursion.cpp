#include <iostream>
using namespace std;
unsigned long long factorial(int n){return n<=1?1ULL:n*factorial(n-1);}
int main(){int n;cout<<"Enter N (0-20): ";if(!(cin>>n)||n<0||n>20)return 1;cout<<n<<"! = "<<factorial(n)<<'\\n';}
