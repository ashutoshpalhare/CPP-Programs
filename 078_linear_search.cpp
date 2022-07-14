#include <iostream>
#include <vector>
using namespace std;
int main(){int n,key;cout<<"Size (1-100): ";if(!(cin>>n)||n<1||n>100)return 1;vector<int>a(n);for(int &x:a)if(!(cin>>x))return 1;cout<<"Search value: ";if(!(cin>>key))return 1;for(int i=0;i<n;i++)if(a[i]==key){cout<<"Found at index "<<i<<'\\n';return 0;}cout<<"Not found\\n";}
