#include <iostream>
using namespace std;
int main(){int a[]={10,20,30,40,50};int *p=a;cout<<"First value: "<<*p<<'\\n';p++;cout<<"After p++: "<<*p<<'\\n';cout<<"Third element via *(p+1): "<<*(p+1)<<'\\n';for(p=a;p<a+5;p++)cout<<*p<<' ';cout<<'\\n';}
