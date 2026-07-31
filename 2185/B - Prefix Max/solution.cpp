#include <bits/stdc++.h>
using namespace std;
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
        sort(arr.begin(),arr.end());
        int maxi=*max_element(arr.begin(),arr.end());
        cout<<n*maxi<<endl;
    }
 
    return 0;
}