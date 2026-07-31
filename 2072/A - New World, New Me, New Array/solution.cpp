#include <bits/stdc++.h>
using namespace std;
 
int moves(int n,int k,int p){
    int moves=0;
    if(k>n*p || k<n*p*(-1)){
        return -1;
    }
 
    else{
        if(k%p==0){
            moves=abs(k)/p;
        }
        else{
            moves=(abs(k)/p)+1;
        }
    }
    return moves;
 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,p;
        cin>>n>>k>>p;
        cout<<moves(n,k,p)<<endl;
 
    }
    return 0;
}