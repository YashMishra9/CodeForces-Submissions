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
        set<int>st;
        for(int x:arr){
            st.insert(x);
        }
        int diff=st.size();
        if((n-diff)%2==0){
            cout<<diff<<endl;
        }
        else cout<<diff-1<<endl;
    }
    return 0;
}