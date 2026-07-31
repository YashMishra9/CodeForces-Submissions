#include <bits/stdc++.h>
using namespace std;
 
int findZeros(int n,vector<int>arr){
    int count=0;
    int countzero=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count++;
        }
        else count=0;
 
        countzero=max(countzero,count);
    }
    return countzero;
}
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
        cout<<findZeros(n,arr)<<endl;
    }
 
    return 0;
}