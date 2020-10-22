#include <bits/stdc++.h> 
using namespace std; 
  
// Driver Code 
int main() 
{ 
    int n;
    cin>>n; 
    int t = n;
    long long int Result = 1; 
  
    while (n > 0) { 
        Result = Result * n; 
        n--; 
    } 
    cout << Result/(t*(t/2)); 
} 