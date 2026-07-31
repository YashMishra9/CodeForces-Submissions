#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,c;
    cin>>n>>c;
    vector<long long>arr(n);
    for(auto &it:arr){
        cin>>it;
    }
    long long cnt=1;
    for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1]<=c){
            cnt++;
        }
        else cnt=1;
    }
    cout<<cnt;
 
    return 0;
}