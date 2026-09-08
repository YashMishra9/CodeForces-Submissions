#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0;i<n;i+=k){
            bool ok=true;
            for(int j=i;j<i+k;j++){
                if(s[j]=='0'){
                    ok=false;
                    break;
                }
            }
            if(ok){
                cnt++;
            }
        }
        cout<<cnt<<endl;
 
    }
}