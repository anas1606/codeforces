#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str,rstr;
    cin>>str>>rstr;

    reverse(str.begin(),str.end());
    
        if(rstr == str)
            cout<<"YES";
        else
            cout<<"NO";    

}