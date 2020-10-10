#include <bits/stdc++.h>
using namespace std;
const int mac=100;
char s[mac];
int to(char a,char b){
	if (a>b) 
        return 'Z'-a+b-'A'+1;
	return a-'A'+'Z'-b+1;
}
int main(){
	int n;
	cin>>n;
	scanf ("%s",s);
	int ans1,ans2,ans3,ans4,minn=9999999;
	for (int i=0; i<n-3; i++){
		ans1=min(s[i]-'A','Z'-s[i]+1);
		ans2=min(abs(s[i+1]-'C'),to(s[i+1],'C'));
		ans3=min(abs(s[i+2]-'T'),to(s[i+2],'T'));
		ans4=min(abs(s[i+3]-'G'),to(s[i+3],'G'));
		minn=min(minn,ans1+ans2+ans3+ans4);
	}
	cout<<minn<<endl;
	return 0;
}