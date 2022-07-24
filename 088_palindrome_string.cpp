#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){string s;cout<<"Enter a line: ";getline(cin,s);string t;for(unsigned char c:s)if(isalnum(c))t+=char(tolower(c));string r=t;for(int i=0,j=(int)r.size()-1;i<j;i++,j--)swap(r[i],r[j]);cout<<(t==r?"Palindrome\\n":"Not a palindrome\\n");}
