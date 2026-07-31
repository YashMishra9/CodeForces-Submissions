#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>arr(3);
        for(auto &it:arr){
            cin>>it;
        }
        map<int,int>mpp;
        for(int x:arr){
            mpp[x]++;
        }
        for(auto &it:mpp){
            if(it.second==1){
                cout<<it.first<<endl;
                break;
            }
        }
 
 
    }
    return 0;
}