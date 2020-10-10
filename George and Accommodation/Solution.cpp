#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=0;
    cin>>n;

    pair<int,int>p;

        for(int i=0;i<n;i++)
        {
            cin>>p.first>>p.second;
            ans += (p.first <= (p.second-2)); 
        }        
        cout<<ans;
}