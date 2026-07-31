#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m;
    vector<long long>bulbs(m+1,0);
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        while(x--){
            long long b;
            cin>>b;
            bulbs[b]=1;
        }
    }
    for(int i=1;i<=m;i++){
        if(bulbs[i]==0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
        
    return 0;
}