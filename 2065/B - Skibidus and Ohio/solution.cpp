#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool ok=false;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==s[i+1]){
                ok=true;
            }
        }
        if(ok){
            cout<<1<<endl;
        }
        else cout<<s.length()<<endl;
    }
    return 0;
}