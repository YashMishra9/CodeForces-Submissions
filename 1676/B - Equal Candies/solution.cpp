#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>arr(n);
        for(auto &it:arr){
            cin>>it;
        }
        sort(arr.begin(),arr.end());
        long long sum=0;
        for(int i=1;i<n;i++){
            sum+=arr[i]-arr[0];
        }
 
        cout<<sum<<endl;
    }
    return 0;
}