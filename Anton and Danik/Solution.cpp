#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,c=0;
    string str;
    cin>>a>>str;

    for(int i=0; i< str.length() ; i++)
    {
        if(str[i] == 'A')
            c++;
    }

    if(abs(c-a) == c)
        cout<<"Friendship";
    else if(abs(c-a) < c)
        cout<<"Anton";
    else
        cout<<"Danik";
}