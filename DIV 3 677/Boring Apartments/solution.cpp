#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ans=0;
    int t;
    cin>>t;

    while(t--)
    {
        int a;
        cin>>a;
        int temp = a%10;

        int sum = (log10(a)+1);
        
            ans = ((temp-1)*10) + sum*(sum+1)/2;
            
        cout<<ans<<endl;
    }
    
}