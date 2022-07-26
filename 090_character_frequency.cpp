#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){string s;cout<<"Enter a line: ";getline(cin,s);map<char,int>freq;for(char c:s)if(c!='\\n')freq[c]++;for(auto [ch,count]:freq)cout<<"'"<<ch<<"' : "<<count<<'\\n';}
