#include <bits/stdc++.h>
 
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,n;
        cin>>a>>b>>n;
        vector<long long>arr(n);
        for(auto &it:arr){
            cin>>it;
        }
        long long maxtime=b;
        for(int i=0;i<n;i++){
            maxtime+= min({arr[i],a-1});
        }
        cout<<maxtime<<endl;
 
    }
 
    return 0;
}