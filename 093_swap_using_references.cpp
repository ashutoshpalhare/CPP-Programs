#include <iostream>
#include <utility>
using namespace std;
void swapValues(int &a,int &b){int t=a;a=b;b=t;}
int main(){int a,b;cout<<"Enter two integers: ";if(!(cin>>a>>b))return 1;swapValues(a,b);cout<<"After swap: "<<a<<' '<<b<<'\\n';}
