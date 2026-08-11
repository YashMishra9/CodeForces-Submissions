#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        vector<long long>arr(3);
        for(auto &it:arr){
            cin>>it;
        }
        sort(arr.begin(),arr.end());
        if(arr[2]<=arr[0]+arr[1]){
            cout<<arr[2]-arr[0]<<endl;
        }
        else{
            cout<<arr[1]<<endl;
        }
    }
}