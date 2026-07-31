#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x=0,y=0;
        bool ok=false;
        for(char c:s){
            if(c=='L'){
                x--;
                if(x==1 && y==1){
                    ok=true;
                }  
                      }          
            else if(c=='R'){
                x++;
                if(x==1 && y==1){
                    ok=true;
                }  
            }
            else if(c=='U'){
                y++;
                if(x==1 && y==1){
                    ok=true;
                }  
            }
            else if(c=='D'){
                y--;
                if(x==1 && y==1){
                    ok=true;
                }  
            }
        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
 
    return 0;
}