#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){const string filename="sample_cpp.txt";{ofstream out(filename);if(!out){cerr<<"Cannot open file for writing\\n";return 1;}out<<"Hello from C++ file handling!\\n";}ifstream in(filename);if(!in){cerr<<"Cannot open file for reading\\n";return 1;}string line;while(getline(in,line))cout<<line<<'\\n';}
