#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count=0,ans=0,n,t=0;
    cin>>n;
    for(int i=1 ; i<=n ;i++)
    {
        pair<int,int> p;
        cin>>p.first>>p.second;

        if(i==1)
            count =  p.first + p.second;
        else
        {
            t = count;
            count -= p.first;
            count += p.second;
        }
        
        if(t>ans)
            ans=t;
    }

    cout<<ans;
}