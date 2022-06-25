#include <iostream>
#include <string>
using namespace std;
int main(){unsigned int n;cout<<"Enter non-negative integer: ";if(!(cin>>n))return 1;if(!n){cout<<"Octal = 0\\n";return 0;}string s;while(n){s=char('0'+n%8)+s;n/=8;}cout<<"Octal = "<<s<<'\\n';}
