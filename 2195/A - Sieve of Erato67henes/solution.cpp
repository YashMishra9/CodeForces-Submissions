#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>arr(n);
        for(auto &it:arr){
            cin>>it;
        }
        bool ok=false;
        for(int i=0;i<n;i++){
 
            if(arr[i]==67){
                ok=true;
            }
            for(int j=i+1;j<n;j++){
                if(arr[i]*arr[j]==67){
                    ok=true;
                }
            }
        }
        if(ok){
            cout<<"YES
";
        }
        else cout<<"NO
";
    }
    return 0;
}