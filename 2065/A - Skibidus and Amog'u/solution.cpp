#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.length()>=3){
            for(int i=0;i<s.length()-2;i++){
                cout<<s[i];
            }
            cout<<'i'<<endl;
        }
        else cout<<'i'<<endl;
    }
    return 0;
}