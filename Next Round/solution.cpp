#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count=0;

            int n,k,arr[50];
            cin>>n>>k;
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
            for(int i=0; i<=n-1 && arr[i]>=arr[k-1] && arr[i];i++){
                count++;
            }

    cout<<count;

}