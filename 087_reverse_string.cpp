#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){string s;cout<<"Enter a line: ";getline(cin,s);reverse(s.begin(),s.end());cout<<"Reversed: "<<s<<'\\n';}
