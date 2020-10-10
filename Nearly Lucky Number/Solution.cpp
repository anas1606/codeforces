#include<bits/stdc++.h>
using namespace std;

int main()
{
    int flag=0;
    string str;
    cin>>str;

    for(int i=0;i<str.length();i++)
    {
        if(str[i] == '4' || str[i] == '7')
            flag++;
    }

    if(flag == 4 || flag == 7)
        cout<<"YES";
    else
        cout<<"NO";
    
}