#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
struct Student{int roll;string name;double marks;};
int main(){
    vector<Student> students;
    int choice;
    do{
        cout<<"\\n--- Student Management ---\\n1. Add student\\n2. List students\\n3. Save and exit\\nChoice: ";
        if(!(cin>>choice))return 1;
        if(choice==1){Student s;cout<<"Roll, name (one word), marks: ";if(!(cin>>s.roll>>s.name>>s.marks))return 1;students.push_back(s);cout<<"Student added.\\n";}
        else if(choice==2){if(students.empty())cout<<"No records yet.\\n";for(const auto&s:students)cout<<s.roll<<" | "<<s.name<<" | "<<s.marks<<'\\n';}
        else if(choice==3){ofstream out("students_cpp.txt");if(!out){cerr<<"Cannot save records.\\n";return 1;}for(const auto&s:students)out<<s.roll<<' '<<s.name<<' '<<s.marks<<'\\n';cout<<"Records saved to students_cpp.txt\\n";}
        else cout<<"Invalid choice.\\n";
    }while(choice!=3);
}
