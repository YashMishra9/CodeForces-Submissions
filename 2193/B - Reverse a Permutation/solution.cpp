#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>arr(n);
        for(auto &it:arr){
            cin>>it;
        }
        vector<long long>pos(n+1);
       for(int i=0;i<n;i++){
            pos[arr[i]]=i;
       }
       for(int i=0;i<n;i++){
        int wanted=n-i;
        if(arr[i]==wanted){
            continue;
        }
        int j=pos[wanted];
        reverse(arr.begin()+i,arr.begin()+j+1);
        break;
    }
    for(auto ot:arr){
        cout<<ot<<" ";
    }
    cout<<endl;
 
        
    }
 
}