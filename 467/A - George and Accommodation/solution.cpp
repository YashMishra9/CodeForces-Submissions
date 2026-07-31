#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p,q;
    int cnt=0;
 
    while(n--){
        cin>>p>>q;
        if(q-p>=2){
            cnt++;
        }
    }
    cout<<cnt;
 
    return 0;
}