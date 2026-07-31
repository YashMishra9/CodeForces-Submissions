#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;
    string s;
    cin>>s;
    long long calories=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            calories+=a1;
        }
        else if(s[i]=='2'){
            calories+=a2;
        }
        else if(s[i]=='3'){
            calories+=a3;
        }
        else if(s[i]=='4'){
            calories+=a4;
        }
    }
    cout<<calories;
 
    return 0;
}