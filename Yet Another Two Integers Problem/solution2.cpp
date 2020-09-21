#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
  int t,a,b,c=0;

  for(cin>>t; t-- ; cout<<c<<endl)
  {
    cin>>a>>b;
    c = (abs(a-b)/10);
    if(abs(a-b)%10!=0)
      c+=1;
  }
}
