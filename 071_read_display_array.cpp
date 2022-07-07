#include <iostream>
#include <vector>
using namespace std;
int main(){int n;cout<<"Array size (1-100): ";if(!(cin>>n)||n<1||n>100)return 1;vector<int>a(n);for(int &x:a)if(!(cin>>x))return 1;for(int x:a)cout<<x<<' ';cout<<'\\n';}
