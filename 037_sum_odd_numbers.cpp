#include <iostream>
using namespace std;
int main(){int n;long long s=0;cout<<"Enter N: ";if(!(cin>>n)||n<0)return 1;for(int i=1;i<=n;i+=2)s+=i;cout<<"Sum = "<<s<<'\\n';}
