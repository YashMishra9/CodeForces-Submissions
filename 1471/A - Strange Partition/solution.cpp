#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        vector<long long>arr(n);
        for(auto &it:arr){
            cin>>it;
        }
        long long mini=0,maxi=0;
        for(int i=0;i<n;i++){
                maxi+=ceil(arr[i]*1.0/x);
                mini+=arr[i];
        }
        mini=ceil(mini*1.0/x);
        cout<<mini<<" "<<maxi<<endl;
    }
    return 0;
}