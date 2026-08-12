#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        int cnt0=0,cnt1=0,cnt2=0;
        for(auto &it:arr){
            cin>>it;
            if(it==0){
                cnt0++;
            }
            else if(it==1){
                cnt1++;
            }
            else{
                cnt2++;
            }
        }
        int ans=cnt0+min(cnt1,cnt2)+(cnt1-min(cnt1,cnt2))/3+
        (cnt2-min(cnt1,cnt2))/3;
        cout<<ans<<endl;
        
       
    }
}