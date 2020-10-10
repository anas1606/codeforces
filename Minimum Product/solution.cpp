#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  ll t,a,b,x,y,n,i,j,k,l;
  cin>>t;
  while(t--)
    {
        cin>>a>>b>>x>>y>>n;

        if( ((a-x)+(b-y) )< n )
          cout<<x*y<<endl;
        else
        {
          k=min(a-x,n);
          l=n-k;
          l=min(b-y,l);
          i=(a-k)*(b-l);

          k=min(b-y,n);   
          l=n-k;
          l=min(a-x,l);
          j=(a-l)*(b-k);

          if(i<j)
            cout<<i<<endl;
          else
            cout<<j<<endl;
        }
    }
}
