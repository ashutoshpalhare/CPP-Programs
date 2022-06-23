#include <iostream>
#include <bitset>
using namespace std;
int main(){unsigned int n;cout<<"Enter non-negative integer: ";if(!(cin>>n))return 1;if(n==0){cout<<"Binary = 0\\n";return 0;}string s;while(n){s=char('0'+n%2)+s;n/=2;}cout<<"Binary = "<<s<<'\\n';}
