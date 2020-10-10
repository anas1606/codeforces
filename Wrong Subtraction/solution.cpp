#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,int> p;
    cin>>p.first>>p.second;

    while (p.second --)
    {
        if( (p.first%10) == 0 )
            p.first /=10;
        else
            p.first-=1;
    }

    cout<<p.first;
    
}