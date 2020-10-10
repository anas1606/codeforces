#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ans=0,n;
    char temp=' ';
    string str;
    cin>>n;
    cin>>str;

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i] == temp)
        {
            ans++;
        }
        temp = str[i];
    }
    cout<<ans;
}