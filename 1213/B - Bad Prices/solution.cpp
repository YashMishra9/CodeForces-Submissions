#include <bits/stdc++.h>
using namespace std;
 
int countRight(vector<long long>&arr,int n){
    long long mini=LLONG_MAX;
    long long cnt=0;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>mini){
            cnt++;
        }
        mini=min(arr[i],mini);
    }
    return cnt;
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
        cout<<countRight(arr,n)<<endl;
        
    }
 
    return 0;
}