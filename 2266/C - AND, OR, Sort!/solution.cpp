#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        if(s[0]=='1'){
            cout<<count(s.begin(),s.end(),'0')<<endl;
            continue;
        }
        int zeros=count(s.begin(),s.end(),'0');
        int left1=0;
        int right0=zeros;
        int ans=right0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                left1++;
            }
            else{
                right0--;
            }
            ans=min(ans,left1+right0);
        }
        cout<<ans<<endl;
    }
}