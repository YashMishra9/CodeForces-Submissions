#include <bits/stdc++.h>
using namespace std;
 
bool checkSum(vector<int>arr,int s,int x){
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    for(int i=0;i<1000;i++){
        if((s-x*i)==sum){
            return true;
        }
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,s,x;
    cin>>n>>s>>x;
    vector<int>arr(n);
    for(auto &it:arr){
        cin>>it;
    }
    bool ok=checkSum(arr,s,x);
    if(ok){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    }
 
    return 0;
}