#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Student{int roll;string name;double marks;};
int main(){int n;cout<<"Number of students (1-50): ";if(!(cin>>n)||n<1||n>50)return 1;vector<Student>students(n);for(auto &s:students){cout<<"Roll, name, marks: ";if(!(cin>>s.roll>>s.name>>s.marks))return 1;}cout<<"\\nStudent records:\\n";for(const auto&s:students)cout<<s.roll<<" | "<<s.name<<" | "<<s.marks<<'\\n';}
