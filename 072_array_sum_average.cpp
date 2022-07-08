#include <iostream>
#include <vector>
using namespace std;
int main(){int n;cout<<"Size (1-100): ";if(!(cin>>n)||n<1||n>100)return 1;vector<double>a(n);double sum=0;for(double &x:a){if(!(cin>>x))return 1;sum+=x;}cout<<"Sum = "<<sum<<"\\nAverage = "<<sum/n<<'\\n';}
