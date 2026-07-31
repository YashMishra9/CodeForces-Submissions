#include <bits/stdc++.h>
using namespace std;
int main(){
    long  long t;
    cin>>t;
    while(t--){
        int  n;
        cin>>n;
        vector<int>arr(n);
        for(auto &it:arr){
            cin>>it;
        }
        int maxi=*max_element(arr.begin(),arr.end());
        cout<<maxi<<endl;
    }
    return 0;
}