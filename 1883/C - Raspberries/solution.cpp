#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long>arr(n);
        for(auto &it:arr){
            cin>>it;
        }
        long long ans=INT_MAX;
        long long even_count=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                even_count++;
            }
            if(arr[i]%k==0){
                ans=0;
            }
            ans=min(ans,k-(arr[i]%k));
        }
        if(k==4){
            if(even_count>=2){
                ans=min(ans,0LL);
            }
            else if(even_count==1){
                ans=min(ans,1LL);
            }
            else if(even_count==0){
                ans=min(ans,2LL);
            }
        }
        cout<<ans<<endl;
 
    }
    return 0;
}