#include <iostream>
using namespace std;
int main(){int a,b;cout<<"Enter range: ";if(!(cin>>a>>b)||a>b)return 1;for(int n=a;n<=b;n++){bool p=n>=2;for(int d=2;p&&d<=n/d;d++)if(n%d==0)p=false;if(p)cout<<n<<' ';}cout<<'\\n';}
