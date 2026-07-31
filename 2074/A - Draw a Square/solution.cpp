#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        
        vector<int>arr(4);
        for(auto &it:arr){
            cin>>it;
        }
        set<int>st;
        for(int x:arr){
            st.insert(x);
        }
        if(st.size()==1){
            cout<<"YES
";
        }
        else cout<<"NO
";
    }
    return 0;
}