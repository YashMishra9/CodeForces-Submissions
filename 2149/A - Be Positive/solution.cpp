#include <bits/stdc++.h>
using namespace std;
 
int count(int n,vector<long long>arr){
    int cnt=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==n){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>arr(n);
        for(auto &it:arr){
            cin>>it;
        }
        int cntMinus1=count(-1,arr);
        int cnt0=count(0,arr);
        int cnt1=count(1,arr);
        int moves=0;
        if(cntMinus1%2==0){
            moves+=cnt0;
        }
        else{
            moves+=2+cnt0;
        }
        cout<<moves<<endl;
    }
    return 0;
}