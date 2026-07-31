#include <bits/stdc++.h>
using namespace std;
 
string check(int n,vector<int>arr){
    sort(arr.begin(),arr.end());
    for(int i=1;i<n;i++){
                if(abs(arr[i]-arr[i-1])>1){
                    return "NO";
                
            }
        }
        return "YES";
}
                
 
 
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
        cout<<check(n,arr)<<endl;
 
    }
    return 0;
}