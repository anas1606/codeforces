#include<bits/stdc++.h>
using namespace std;
#define testcase int a;cin>>a;while(a--)

int main()
{
    int ans=0;
    testcase{

        pair<int,pair<int,int>> p;
        
        cin>>p.first>>p.second.first>>p.second.second;

        if( (p.first+p.second.first+p.second.second) > 1)
            ans++;
    }    
    cout<<ans;
}