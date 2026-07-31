#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int>arr(n);
        for(auto &it:arr){
            cin>>it;
        }
        int mini=*min_element(arr.begin(),arr.end());
        int maxi=*max_element(arr.begin(),arr.end());
        int ans=maxi-mini+min(abs(mini-s),abs(maxi-s));
        cout<<ans<<endl;
 
 
    }
    return 0;
}