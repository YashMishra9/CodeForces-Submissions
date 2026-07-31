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
        sort(arr.begin(),arr.end());
        cout<<arr[1]<<endl;
    }
    return 0;
}