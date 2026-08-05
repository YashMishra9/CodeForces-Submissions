#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        for(auto &it:a){
            cin>>it;
        }
        for(auto &it:b){
            cin>>it;
        }
        int ans=a[n-1];
        for(int i=0;i<n-1;i++){
            ans+=max(0,a[i]-b[i+1]);
        }
        cout<<ans<<endl;
    }
}