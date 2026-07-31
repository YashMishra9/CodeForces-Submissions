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
        bool ok=true;
        for(int i=0;i<n-1;i++){
            if(abs(arr[i]-arr[i+1])!=5 && abs(arr[i]-arr[i+1])!=7){
                ok=false;
            }
        }
        if(ok)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
    return 0;
}