#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(auto &it:arr){
        cin>>it;
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]+k<=5){
            cnt+=1;
        }
    }
    cout<<cnt/3;
 
    return 0;
}