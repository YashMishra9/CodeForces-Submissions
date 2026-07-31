#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<string>arr(n);
        for(auto &it:arr){
            cin>>it;
        }
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int diff=0;
                for(int k=0;k<m;k++){
                    diff+=abs(arr[j][k]-arr[i][k]);
                }
                ans=min(ans,diff);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}