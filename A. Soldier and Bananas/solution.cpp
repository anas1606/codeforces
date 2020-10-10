#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,pair<int,int>>p;
    cin>>p.first>>p.second.first>>p.second.second;
    int topay=0;
    for(int i=1;i<=p.second.second;i++){
        topay += (i * p.first);
    }
    
    (topay>p.second.first)?cout<<(topay-p.second.first):cout<<0;
}