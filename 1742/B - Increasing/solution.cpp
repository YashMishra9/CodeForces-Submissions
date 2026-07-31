#include <bits/stdc++.h>
using namespace std;
 
string increase(long long n,vector<long long>arr){
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            return "NO";
        }
    }
    return "YES";
}
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
        cout<<increase(n,arr)<<endl;
    }
    return 0;
}