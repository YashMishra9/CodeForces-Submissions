#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(is_sorted(arr.begin(),arr.end())){
            cout<<"YES"<<endl;
            continue;
        
        }
        int mn=*min_element(arr.begin(),arr.end());
        if(arr[0]==mn){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
 
    }
 
    return 0;
}