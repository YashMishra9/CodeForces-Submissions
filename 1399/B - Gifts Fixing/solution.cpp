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
        vector<long long>nums(n);
        for(auto &it:nums){
            cin>>it;
        }
        long long mini1=*min_element(arr.begin(),arr.end());
        long long mini2=*min_element(nums.begin(),nums.end());
        long long ans=0;
        for(int i=0;i<n;i++){
            long long maxi=max(arr[i]-mini1,nums[i]-mini2);
            ans+=maxi;
        }
        cout<<ans<<endl;
 
    }
 
    return 0;
}