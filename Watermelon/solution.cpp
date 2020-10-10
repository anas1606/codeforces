#include<iostream>
using namespace std;
#define we(a) ((a==2)?"NO":(a&1)?"NO":"YES")
int main(){
 
  int c;
  cin>>c;
  cout<<we(c);
 
  return 0;
}