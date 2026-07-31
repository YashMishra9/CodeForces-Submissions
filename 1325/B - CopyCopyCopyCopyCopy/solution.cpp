#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(auto &it:arr){
            cin>>it;
        }
        set<int>st;
        for(int x:arr){
            st.insert(x);
        }
        int ans=st.size();
        cout<<ans<<endl;
    }
 
    return 0;
}