#include <bits/stdc++.h>
using namespace std;
 
 
 
int count(long long n,vector<long long>arr){
     map<int,int>mpp;
        for(int x:arr){
            mpp[x]++;
        }
        for(auto it:mpp){
            if(it.second>=3){
                return it.first;
            }
        }
        return -1;
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>arr(n);
        for(auto &it:arr){
            cin>>it;
        }
 
        cout<<count(n,arr)<<endl;
            
 
 
    }
 
    return 0;
}