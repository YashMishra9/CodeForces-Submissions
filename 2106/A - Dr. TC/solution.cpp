#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string final="";
        for(int i=0;i<n;i++){
                final+=s;
        }
        int i=0;
        int steps=n+1;
        while(i<final.size()){
            
            final[i]^=1;
            i+=steps;
        }
        int cnt=0;
        for(char c:final){
            if(c=='1'){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}