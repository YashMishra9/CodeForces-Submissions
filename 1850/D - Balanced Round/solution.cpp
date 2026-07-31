#include <bits/stdc++.h>
using namespace std;
 
int balanced(vector<long long>&arr,long long n,long long k){
    sort(arr.begin(),arr.end());
    long long maxi=1;
    long long cnt=1;
    if(n==1){
        return 0;
    }
    for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1]<=k){
            cnt++;
            maxi=max(maxi,cnt);
        }
        else{
            cnt=1;
        }
    }
    return n-maxi;
}
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
 
    cout<<balanced(arr,n,k)<<endl;
}
return 0;
 
}