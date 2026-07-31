#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,s,m;
        cin>>n>>s>>m;
       
        vector<pair<int,int>>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i].first>>arr[i].second;
        }
        sort(arr.begin(),arr.end());
        bool ok=false;
        if(arr[0].first>=s){
            ok=true;
        }
        for(int i=0;i<n-1;i++){
            int gap=arr[i+1].first-arr[i].second;
            if(gap>=s){
                ok=true;
            }
        }
        if(m-arr[n-1].second>=s){
            ok=true;
        }
        if(ok){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}