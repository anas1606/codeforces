#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cp=0,lo=0;
    string str;
    cin>>str;

    for(int i=0;i<str.length();i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            cp++;
        else
            lo++;
    }
    if(cp > lo)
        transform(str.begin(),str.end(),str.begin(), ::toupper);
    else
        transform(str.begin(),str.end(),str.begin(), ::tolower);

    cout<<str;
}