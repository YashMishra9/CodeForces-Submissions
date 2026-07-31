#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt=0;
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                    if(2*i+4*j==n){
                        cnt++;
                    }
            }
        }
        cout<<cnt<<endl;
    }
 
    return 0;
}