#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int posG,posT;
    for(int i=0;i<n;i++){
        if(s[i]=='G'){
            posG=i;
        }
        if(s[i]=='T'){
            posT=i;
        }
    }
    if(posG<posT){
        for(int i=posG;i<n;i+=k){
            if(s[i]=='#'){
                cout<<"NO";
                return 0;
            }
            if(s[i]=='T'){
                cout<<"YES";
                return 0;
            }
        }
    }
    else{
        for(int i=posG;i>=0;i-=k){
            if(s[i]=='#'){
                cout<<"NO";
                return 0;
            }
            if(s[i]=='T'){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    
 
    return 0;
}