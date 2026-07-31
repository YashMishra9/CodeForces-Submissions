#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,q;
        cin>>n>>q;
        vector<int>arr(n);
        for(auto &it:arr){
            cin>>it;
        }
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        vector<long long>prefix_sum(n+1,0);
        for(int i=1;i<=n;i++){
            prefix_sum[i]=prefix_sum[i-1]+arr[i-1];
        }
        while(q--){
            long long l,r,k;
            cin>>l>>r>>k;
            long long remove_sum=prefix_sum[r]-prefix_sum[l-1];
            long long add_sum=(r-l+1)*k;
            long long total_sum=sum-remove_sum+add_sum;
            if(total_sum%2==1){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
 
 
    }
 
    return 0;
}