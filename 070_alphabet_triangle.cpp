#include <iostream>
using namespace std;
int main(){int n;cout<<"Rows (1-26): ";if(!(cin>>n)||n<1||n>26)return 1;for(int i=1;i<=n;i++){for(int j=0;j<i;j++)cout<<char('A'+j)<<' ';cout<<'\\n';}}
