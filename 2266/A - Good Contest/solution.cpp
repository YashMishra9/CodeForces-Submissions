#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(3);
        for(auto &it:arr){
            cin>>it;
        }
        int mini=*min_element(arr.begin(),arr.end());
        int ans=n-mini;
        cout<<ans<<endl;
    }
}