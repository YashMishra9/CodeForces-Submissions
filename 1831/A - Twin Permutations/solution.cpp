#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(auto &it:arr){
            cin>>it;
        }
        vector<int>nums;
        int maxi=*max_element(arr.begin(),arr.end());
        int num=maxi+1;
        for(int i=0;i<n;i++){
            nums.push_back(num-arr[i]);
        }
        for(auto &it:nums){
            cout<<it<<" ";
    }
    cout<<endl;
        
 
 
    }
 
    return 0;
}