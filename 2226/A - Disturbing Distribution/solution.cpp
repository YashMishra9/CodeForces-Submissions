#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(auto &it:arr){
            cin>>it;
            
        }
        int sum=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=1){
                sum+=arr[i];
            }
        }
        if(arr[n-1]==1){
            sum++;
        }
      
        cout<<sum<<endl;
    }
}