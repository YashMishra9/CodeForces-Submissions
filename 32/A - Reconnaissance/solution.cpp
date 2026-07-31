#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,d;
    cin>>n>>d;
    vector<long long>arr(n);
    for(auto &it:arr){
        cin>>it;
    }
    long long cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(abs(arr[j]-arr[i])<=d && i!=j){
                cnt++;
            }
            else continue;
        }
    }
    cout<<cnt;
 
    return 0;
}