#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x%2==0 && y%2==0){
            cout<<"YES"<<endl;
        }
        else if(x%2!=0 && y%2!=0 && (abs(y-x)>1 || abs(x-y)==0)){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
    return 0;
}