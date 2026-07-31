#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(auto &it:arr){
        cin>>it;
    }
    int mini=INT_MAX;
    int first=0,last=0;
    for(int i=0;i<n-1;i++){
            int diff=abs(arr[i]-arr[i+1]);
            if(diff<mini){
            mini=diff;
            
            first=i+1;
            last=i+2;
        }
    }
    int diff=abs(arr[n-1]-arr[0]);
    if(diff<mini){
        first=n;
        last=1;
    }   
    
 
    cout<<first<<" "<<last;
 
    return 0;
}