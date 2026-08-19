#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n,c,k;
        cin>>n>>c>>k;
        vector<long long>arr(n);
        for(auto &it:arr){
            cin>>it;
        }
        sort(arr.begin(),arr.end());
        for(long long x:arr){
            if(x>c){
                break;
            }
            long long use=min(k,c-x);
            k-=use;
            c+=x+use;
 
        }
        cout<<c<<endl;
    }
}