#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       
 
        int ans=0;
        bool ok=false;
        for(int i=0;i<=n;i++){
            if(i*i==n){
                ans=i;
                ok=true;
                break;
            }
        }
        if(ok){
            cout<<0<<" "<<ans<<endl;
        }
        else cout<<-1<<endl;
    }
    return 0;
}