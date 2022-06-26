#include <iostream>
using namespace std;
int main(){double base,result=1;int exp;cout<<"Enter base and integer exponent: ";if(!(cin>>base>>exp))return 1;if(base==0&&exp<0){cout<<"Zero cannot have a negative exponent\\n";return 1;}long long e=exp<0?-(long long)exp:exp;for(long long i=0;i<e;i++)result*=base;if(exp<0)result=1/result;cout<<"Result = "<<result<<'\\n';}
