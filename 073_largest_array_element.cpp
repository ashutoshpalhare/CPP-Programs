#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){int n;cout<<"Size (1-100): ";if(!(cin>>n)||n<1||n>100)return 1;vector<int>a(n);for(int &x:a)if(!(cin>>x))return 1;cout<<"Largest = "<<*max_element(a.begin(),a.end())<<'\\n';}
