#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;cin>>t;
    while(t--){
        long long m,a,b,c;
        cin>>m>>a>>b>>c;
        long long seats=0;
        long long rem=0;
        long long row1=min(a,m);
        long long row2=min(b,m);
        seats+=(row1+row2);
        rem+=2*m-row1-row2;
        
        seats+=min(c,rem);
 
        cout<<seats<<endl;
 
    }
    return 0;
}