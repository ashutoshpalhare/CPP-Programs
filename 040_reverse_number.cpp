#include <iostream>
using namespace std;
int main(){long long n;cout<<"Enter integer: ";if(!(cin>>n))return 1;long long x=n,rev=0;while(x){int d=x%10;if(rev>922337203685477580LL||rev< -922337203685477580LL){cout<<"Possible overflow\\n";return 1;}rev=rev*10+d;x/=10;}cout<<"Reverse = "<<rev<<'\\n';}
