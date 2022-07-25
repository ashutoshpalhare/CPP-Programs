#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){string s;cout<<"Enter a line: ";getline(cin,s);int v=0,c=0,d=0,sp=0;for(unsigned char x:s){if(isdigit(x))d++;else if(isspace(x))sp++;else if(isalpha(x)){x=tolower(x);if(string("aeiou").find(char(x))!=string::npos)v++;else c++;}}cout<<"Vowels: "<<v<<"\\nConsonants: "<<c<<"\\nDigits: "<<d<<"\\nSpaces: "<<sp<<'\\n';}
