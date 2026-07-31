#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1;
        cin>>s2;
        bool ok=true;
        for(int i=0;i<n;i++){
            if((s1[i]=='R' && s2[i]!='R') || (s1[i]!='R' && s2[i]=='R')){
                    ok=false;
            }   
           
        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}