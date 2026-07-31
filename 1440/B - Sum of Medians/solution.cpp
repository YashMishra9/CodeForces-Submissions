#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long>arr(n*k);
        for(auto &it:arr){
            cin>>it;
        }
        long long pointer=n*k;
        long long sum=0;
        while(k--){
            pointer-=(n/2 +1);
            sum+=arr[pointer];
        }
        cout<<sum<<endl;
    }
 
    return 0;
}