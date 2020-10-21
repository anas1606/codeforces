#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector <int> an;
    while(t--)
    {
        int a,flag,ans,i;
        cin>>a;

            
            for(i=0,ans=0,flag=0;i<a;i++)
            {
                int t;
                cin>>t;
                int pos;
                if(t==1 && flag == 0)
                {
                    flag = 1;
                    pos = (i+1); 
                }
                else if(t==1 && flag==1)
                {
                    ans += abs(pos - (i+1))-1;
                    pos = (i+1);
                } 
            }

            an.push_back(ans);
    }
    for(int i=0;i<an.size();i++)
        cout<<an[i]<<endl;
}