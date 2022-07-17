#include <iostream>
#include <vector>
using namespace std;
int main(){int r,c;cout<<"Rows and columns (1-10): ";if(!(cin>>r>>c)||r<1||r>10||c<1||c>10)return 1;vector<vector<int>>a(r,vector<int>(c)),b=a;for(auto&row:a)for(int&x:row)if(!(cin>>x))return 1;for(auto&row:b)for(int&x:row)if(!(cin>>x))return 1;for(int i=0;i<r;i++){for(int j=0;j<c;j++)cout<<a[i][j]+b[i][j]<<' ';cout<<'\\n';}}
