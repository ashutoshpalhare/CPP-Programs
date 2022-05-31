#include <iostream>
using namespace std;
int main(){int n;cout<<"Rows (1-20): ";if(!(cin>>n)||n<1||n>20)return 1;for(int i=0;i<n;i++){unsigned long long c=1;for(int s=0;s<n-i-1;s++)cout<<' ';for(int j=0;j<=i;j++){cout<<c<<' ';c=c*(i-j)/(j+1);}cout<<'\\n';}}
