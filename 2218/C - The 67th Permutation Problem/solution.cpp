#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    int l=1;
    int r=3*n;
    for(int i=0;i<n;i++){
        cout<<l<<" "<<r-1<<" "<<r<<" ";
        l++;
        r-=2;
    }
    cout<<'
';
}
int main(){
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}