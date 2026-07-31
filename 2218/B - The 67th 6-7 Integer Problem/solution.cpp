#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        vector<long long>arr(7);
        for(auto &it:arr){
            cin>>it;
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<6;i++){
            arr[i]=-1*arr[i];
        }
        long long sum=0;
        for(auto &it:arr){
            sum+=it;
        }
        cout<<sum<<endl;
    }
    return 0;
}