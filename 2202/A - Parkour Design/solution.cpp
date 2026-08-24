#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        if(x>=max(2*y,-4*y) && (x-2*y)%3==0){
            cout<<"YES
";
        }
        else cout<<"NO
";
    }
}