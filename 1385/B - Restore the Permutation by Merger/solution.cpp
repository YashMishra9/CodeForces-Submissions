#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>arr(2*n);
        for(auto &it:arr){
            cin>>it;
        }
 
        unordered_set<int>seen;
        for(int x:arr){
            if(seen.find(x)==seen.end()){
                cout<<x<<" ";
                seen.insert(x);
            }
        }
        cout<<endl;
    }
    return 0;
}