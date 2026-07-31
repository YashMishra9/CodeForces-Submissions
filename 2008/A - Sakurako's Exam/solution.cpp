#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        bool ok=false;
        if(a%2==0 && b%2==0){
            ok=true;
        }
        else if(a%2==0 && b%2!=0  && a!=0){
            ok=true;
        }
        if(ok) cout<<"YES
";
        else cout<<"NO
";
    }
    return 0;
}