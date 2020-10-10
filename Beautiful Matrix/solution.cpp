#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][5];
    pair<int,int> p;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
                if(a[i][j]==1)
                {
                    p.first=i;
                    p.second=j;
                }
        }
    }
    cout<<abs(p.first-2)+abs(p.second-2);
}