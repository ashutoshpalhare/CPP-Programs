#include <iostream>
#include <string>
using namespace std;
int main(){string b;cout<<"Enter binary digits: ";if(!(cin>>b))return 1;unsigned long long value=0;for(char c:b){if(c!='0'&&c!='1'){cout<<"Invalid binary number\\n";return 1;}if(value>(~0ULL)/2){cout<<"Value too large\\n";return 1;}value=value*2+(c-'0');}cout<<"Decimal = "<<value<<'\\n';}
