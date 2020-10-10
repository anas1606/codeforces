#include<bits/stdc++.h>
using namespace std;


int main(){

    string str;
    int cnt = 0,len,ar[26] = {0};
    cin >> str;
    len = str.size();
    for(int i = 0; i < len; i++){

        if(ar[str[i] - 'a'] == 0){
            cnt++;
            ar[str[i] - 'a'] = 1;
        }
    }
    if(!(cnt%2))cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;

    return 0;
}
