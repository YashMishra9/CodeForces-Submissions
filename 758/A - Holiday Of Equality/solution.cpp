#include <bits/stdc++.h>
using namespace std;
int main(){
 
    int n;
    cin>>n;
    vector<long long>arr(n);
    for(auto &it:arr){
        cin>>it;
    }
    sort(arr.begin(),arr.end());
    long long sum=0;
    // int maxi=*max_element(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++){
        sum+=arr[n-1]-arr[i];
    }
    cout<<sum;
 
    return 0;
}