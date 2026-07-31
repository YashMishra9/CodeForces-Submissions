#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>arr(n);
        for(auto &it:arr){
            cin>>it;
        }
        long long segments=0;
        if(arr[0]!=0){
            segments+=1;
        }
        for(int i=1;i<n;i++){
            if(arr[i]!=0 && arr[i-1]==0){
                segments+=1;
            }
        }
        if(segments<=1){
            cout<<segments<<endl;
        }
        else cout<<2<<endl;
    }
 
    return 0;
}