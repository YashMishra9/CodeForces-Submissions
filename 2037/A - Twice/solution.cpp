#include<bits/stdc++.h>
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
        int cnt=0;
        map<int,int>mpp;
        for(int x:arr){
            mpp[x]++;
        }
        for(auto it:mpp){
            cnt+=it.second/2;
        }
        cout<<cnt<<endl;
    }
    return 0;
}