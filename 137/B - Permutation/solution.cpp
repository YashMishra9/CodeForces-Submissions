#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    set<int>st;
    vector<long long>arr(n);
    for(auto &it:arr){
        cin>>it;
    }
    int changes=0;
    for(int x:arr){
        if(x>=1 && x<=n && st.count(x)==0){
            st.insert(x);
        }
        else changes++;
    }
 
    cout<<changes;
    return 0;
}