#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long x,y,k;
        cin>>x>>y>>k;
        long long moves=0;
        long long mx=(x+k-1)/k;
        long long my=(y+k-1)/k;
        moves=max(2*mx-1,2*my);
        cout<<moves<<endl;
    }
    return 0;
}