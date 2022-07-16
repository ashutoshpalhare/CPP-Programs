#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int main(){int n;cout<<"Size (1-100): ";if(!(cin>>n)||n<1||n>100)return 1;vector<int>a;unordered_set<int>seen;for(int i=0,x;i<n;i++){if(!(cin>>x))return 1;if(seen.insert(x).second)a.push_back(x);}for(int x:a)cout<<x<<' ';cout<<'\\n';}
