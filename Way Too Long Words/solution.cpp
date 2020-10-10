#include<iostream>
using namespace std;
#define testcase int a;cin>>a;while(a--)
int main(){
 
  testcase
  {
    string str;
    cin>>str;
    if(str.length() > 10)
      cout<<str[0]<<str.length()-2<<str[str.length()-1]<<endl;
    else
      cout<<str<<endl;
  }
  return 0;
}