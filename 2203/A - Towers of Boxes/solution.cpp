#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long t;
    cin>>t;
    while(t--){
        int n,m,d;
        cin>>n>>m>>d;
        int maxi=(d/m)+1;
        cout<<(n+maxi-1)/maxi<<endl;
    }
}