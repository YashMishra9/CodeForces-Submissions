#include <bits/stdc++.h>
using namespace std;
bool IsPrime(int n){
    int fact=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            fact+=1;
        }
        else continue;
    }
    if(fact==2){
        return true;
    }
    return false;
}
 
bool Isnext(int n,int m){
    vector<int>arr;
    for(int i=1;i<=m;i++){
        if(IsPrime(i)){
            arr.push_back(i);
        }
    }
    bool Isit=false;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==n && arr[i+1]==m){
            Isit=true;
            return true;
        }
        else continue;
    }
    return false;
 
}
int main(){
    int n,m;
    cin>>n>>m;
    bool ok=Isnext(n,m);
    if(ok){
        cout<<"YES";
    }
    else cout<<"NO";
 
 
    return 0;
}