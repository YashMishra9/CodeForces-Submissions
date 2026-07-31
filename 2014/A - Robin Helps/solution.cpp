#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        vector<long long>arr(n);
        for(auto &it:arr){
            cin>>it;
        }
        long long gives=0;
        long long cnt=0;
        for(int i=0;i<n;i++){
            if(arr[i]>=x){
                cnt+=arr[i];
            }
            else if(arr[i]==0 && cnt>=1){
                    gives++;
                    cnt--;
            }
        }
        cout<<gives<<endl;
    }
    return 0;
}