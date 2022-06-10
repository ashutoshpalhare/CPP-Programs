#include <iostream>
using namespace std;
int main(){long long n;cout<<"Enter non-negative integer: ";if(!(cin>>n)||n<0)return 1;long long x=n,rev=0;while(x){rev=rev*10+x%10;x/=10;}cout<<(n==rev?"Palindrome number\\n":"Not a palindrome number\\n");}
