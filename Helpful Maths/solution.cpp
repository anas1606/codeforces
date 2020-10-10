#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int l = str.length();
    int a[l];

    //remove the + opretor from the string
    str.erase(remove(str.begin(),str.end(),'+'),str.end());

    //storing into int arr[]
    l=0;
    for(int i=0;str[i]!='\0';i++)
    {
        a[i]=(int)str[i];
        l++;
    }
    
    //rearrenging the strin array in sorted order eg(i/p=3+1+2 o/p=1+2+3)
    str = "";
    sort(a,a+l);
    for(int i=0;i<l;i++)
    {
        if(i==l-1)
            str = str + (char)a[i];
        else
            str = str + (char)a[i] + "+";
    }
    cout<<str;
}