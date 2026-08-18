#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<string>word(n);
        for(auto &it:word){
            cin>>it;
        }
        vector<string>abbvs(m);
        for(auto &it:abbvs){
            cin>>it;
        }
        string ans="";
        for(auto &it:word){
            ans.push_back(it[0]);
        }
        for(char &c:ans){
            c=c-'a'+'A';
        }
 
        bool ok=true;
        string final="";
        for(auto it:abbvs){
            final+=it;
        }
        for(char c:final){
            if(ans.find(c)==string::npos){
                ok=false;
            }
        }
        if(ok)cout<<"YES
";
        
        else cout<<"NO
";
 
    }
}