#include <iostream>
using namespace std;
int main(){int n;cout<<"Size (1-100): ";if(!(cin>>n)||n<1||n>100)return 1;int a[100];for(int i=0;i<n;i++)if(!(cin>>a[i]))return 1;long long sum=0;for(int *p=a;p<a+n;p++)sum+=*p;cout<<"Sum = "<<sum<<'\\n';}
