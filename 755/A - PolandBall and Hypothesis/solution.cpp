#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(int n){
    int fact=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            fact+=1;
        }
    }
    if(fact==2){
        return true;
    }
    else{
        return false;
    }
}
 
int main(){
    int n;
    cin>>n;
    vector<int>arr={};
    int i=1;
    while(1){
        int val=n*i+1;
        if(!isPrime(val)){
            cout<<i;
            break;
        }
        i++;
    }
    
 
    return 0;
}