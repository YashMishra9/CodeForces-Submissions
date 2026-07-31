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
        long long ops=0;
        map<long long,long long>freq;
        for(long long i=0;i<n;i++){
            freq[arr[i]]++;
        }
        long long current_freq=0;
        for(auto it:freq){
            current_freq=max(current_freq,it.second);
        }
        while(current_freq<n){
            ops++;
            if(current_freq*2<=n){
                ops+=current_freq;
                current_freq*=2;
            }
            else{
                ops+=n-current_freq;
                current_freq=n;
            }
        }
        cout<<ops<<endl;
    }
    return 0;
 
 
}