#include <iostream>
#include <vector>
using namespace std;
int main(){int r1,c1,r2,c2;cout<<"Rows/cols of A: ";if(!(cin>>r1>>c1)||r1<1||r1>10||c1<1||c1>10)return 1;cout<<"Rows/cols of B: ";if(!(cin>>r2>>c2)||r2<1||r2>10||c2<1||c2>10||c1!=r2){cout<<"Incompatible dimensions\\n";return 1;}vector<vector<int>>a(r1,vector<int>(c1)),b(r2,vector<int>(c2)),p(r1,vector<int>(c2));for(auto&row:a)for(int&x:row)if(!(cin>>x))return 1;for(auto&row:b)for(int&x:row)if(!(cin>>x))return 1;for(int i=0;i<r1;i++)for(int j=0;j<c2;j++)for(int k=0;k<c1;k++)p[i][j]+=a[i][k]*b[k][j];for(auto&row:p){for(int x:row)cout<<x<<' ';cout<<'\\n';}}
