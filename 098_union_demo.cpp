#include <iostream>
#include <cstring>
using namespace std;
union Data{int number;float decimal;char text[20];};
int main(){Data d;d.number=42;cout<<"Integer: "<<d.number<<'\\n';d.decimal=3.14f;cout<<"Float: "<<d.decimal<<'\\n';strcpy(d.text,"C++ Programming");cout<<"String: "<<d.text<<'\\n';cout<<"Union members share the same memory.\\n";}
