#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while (t--){
        vector<long long>arr(4);
        for(auto &it:arr){
            cin>>it;
        }
        int cnt=0;
        for(int i=1;i<4;i++){
            if(arr[i]>arr[0]){
                cnt++;
            }
            else continue;
        }
        cout<<cnt<<endl;
    }
    
    return 0;
}