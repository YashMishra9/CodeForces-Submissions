#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>arr(n);
        for(auto &it:arr){
            cin>>it;
        }
        long long ans=arr[0];
        for(int i=0;i<n;i++){
            ans&=arr[i];
        }
        cout<<ans<<endl;
    }
 
    return 0;
}