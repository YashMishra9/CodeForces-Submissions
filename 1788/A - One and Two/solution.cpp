#include <bits/stdc++.h>
using namespace std;
int counts(int x,vector<int>arr){
    int cnt=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==x){
            cnt+=1;
        }
    }
    return cnt;
}
 
int findK(const vector<int>&arr){
    
    int cnt=0;
    int countwo=counts(2,arr);
    if(countwo%2!=0){
        return -1;
    }
    else if(countwo==0){
        return 1;
    }
     for(int i=0;i<arr.size();i++){
 
        if(arr[i]==2){
            cnt+=1;
        if(cnt==countwo/2){
            return i+1;
        }
        
     }
    }
     return -1;
     
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
        cout<<findK(arr)<<endl;
 
 
    }
 
    return 0;
}