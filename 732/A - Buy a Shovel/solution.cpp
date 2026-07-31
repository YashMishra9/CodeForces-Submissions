#include <bits/stdc++.h>
using namespace std;
 
int coins(int k,int r){
    for(int i=1;i<=10;i++){
        if(i*k%10==0){
            return i;
        }
        else if(i*k%10==r){
            return i;
        }
    }
}
int main(){
    long long k,r;
    cin>>k>>r;
    cout<<coins(k,r);
 
    return 0;
}