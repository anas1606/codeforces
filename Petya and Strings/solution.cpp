#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    transform(str2.begin(), str2.end(), str2.begin(), ::toupper);  
    int a = str1.compare(str2);
    if(a==0)
        cout<<"0";
    else if(a<0)
        cout<<"-1";
    else
        cout<<"1";       
}