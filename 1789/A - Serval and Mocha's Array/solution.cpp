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
 
        int flag=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(__gcd(arr[i],arr[j])<=2){
                    flag=1;
                }
            }
        }
        if(flag==0){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
 
    return 0;
}