#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>arr(n);
        for(auto &it:arr){
            cin>>it;
        }
        // sort(arr.begin(),arr.end());
        
        int maxi=-1;
        int secondMax=-1;
        for(auto x:arr){
            if(x>maxi){
                secondMax=maxi;
                maxi=x;
            }
            else if(x>secondMax){
                secondMax=x;
            }
        }
        
        
        for(int i=0;i<n;i++){
            if(arr[i]==maxi){
                arr[i]=maxi-secondMax;
            }
            else arr[i]=arr[i]-maxi;
        }
        for(auto &it:arr){
            cout<<it<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}