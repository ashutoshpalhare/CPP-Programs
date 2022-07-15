#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){int n,key;cout<<"Enter sorted array size (1-100): ";if(!(cin>>n)||n<1||n>100)return 1;vector<int>a(n);for(int &x:a)if(!(cin>>x))return 1;cout<<"Search value: ";if(!(cin>>key))return 1;auto it=lower_bound(a.begin(),a.end(),key);if(it!=a.end()&&*it==key)cout<<"Found at index "<<it-a.begin()<<'\\n';else cout<<"Not found\\n";}
