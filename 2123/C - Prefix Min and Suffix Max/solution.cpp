#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>arr(n);
        for(auto &it:arr){
            cin>>it;
        }
        vector<int>ans(n,0);
        long long mini=INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]<mini){
                ans[i]=1;
                mini=arr[i];
            }
        }
        long long maxi=INT_MIN;
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]>maxi){
                ans[i]=1;
                maxi=arr[i];
            }
        }
        for(auto it:ans){
            cout<<it;
        }
        cout<<endl;
    }
}