#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
typedef  long long ll;
#define F first
#define S second
#define pb push_back
#define ve vector<ll>
#define vp vector< pair <ll,ll> >
#define all(v) (v).begin(), (v).end()
#define sortve(v) sort(all(v))
#define rsrt(v) sort(v.rbegin(), v.rend())
#define rev(i,n) for(ll i=n-1;i>=0;i--)
#define f(i,n) for(ll i=0;i<n;i++)
#define f1(i,n) for(ll i=1;i<n+1;i++)
#define f2(i,a,b) for(ll i=a;i<b;i++)
#define precision(x) cout << fixed << setprecision(x);
#define testcase  ll t;cin>>t;while(t--)
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr)
#define bas cout<<"\n";
const ll PI = 3.1415926535897932384626;
const ll mod= 1000000007;
const ll FMOD = 998244353;
const ll N=100005;
const double eps = 1e-9;


ll check(double n)
{
   double x = n*n;
   if((x - (int)x)==0)
      return 1;
   else
      return 0;
}


int main()
{
   testcase
   {
       ll n, x, y,flag=0,f,dif,last=mod;
       cin >> n >> x >> y;
       if(n==2)
       {
           cout<< x <<" "<< y;
       }
       else
       {
            for(ll k=1;k<=x;k++)
            {
                for(ll d=1; d <= y-x;d++)
                {
                    if((y-k)%d==0 && (x-k)%d==0 && (y-k)/d<=n-1)
                    {

                        if((k+(n-1)*d)<last)
                        {
                            last=k+(n-1)*d;
                            f=k;
                            dif=d;
                        }

                    }
                }
                if(flag==1)
                break;
            }

            for(ll i=0;i<n;i++)
            {
                cout << f+(i)*dif <<" ";
            }

       }

       bas
   }
   return 0;
}
