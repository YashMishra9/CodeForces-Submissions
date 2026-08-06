#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long t;
    cin>>t;
    while(t--){
        vector<int>arr(3);
        for(auto &it:arr){
            cin>>it;
        }
        sort(arr.begin(),arr.end());
        cout<<min(abs(arr[1]-arr[0]),abs(arr[2]-arr[1]))<<endl;
 
    }
}