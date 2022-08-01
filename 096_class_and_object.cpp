#include <iostream>
#include <string>
using namespace std;
class Student{public:int roll;string name;double marks;void display()const{cout<<"Roll: "<<roll<<"\\nName: "<<name<<"\\nMarks: "<<marks<<'\\n';}};
int main(){Student s;cout<<"Enter roll, name, marks: ";if(!(cin>>s.roll>>s.name>>s.marks))return 1;s.display();}
