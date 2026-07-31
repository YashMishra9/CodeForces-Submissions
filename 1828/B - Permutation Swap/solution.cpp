#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<int>arr(n);
        for(auto &it:arr){
            cin>>it;
        }
        int k=abs(arr[0]-1);
        for(int i=1;i<n;i++){
            k=__gcd(k,abs(arr[i]-(i+1)));
        }
        cout<<k<<endl;
    }
 
    return 0;
}