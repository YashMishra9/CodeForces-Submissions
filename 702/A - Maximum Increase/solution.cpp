#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long>arr(n);
    for(auto &it:arr){
        cin>>it;
    }
    long long maxi=1;
    long long cnt=1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            cnt++;
            maxi=max(cnt,maxi);
        }
        else cnt=1;
    }
    cout<<maxi;
 
    return 0;
}