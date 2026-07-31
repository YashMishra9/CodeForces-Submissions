#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,l,m,n,d;
    cin>>k;
    cin>>l;
    cin>>m;
    cin>>n;
    cin>>d;
    set<int>unique;
    for(int i=1;i<=d;i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
            unique.insert(i);
        }
    }
    cout<<unique.size();   
 
 
    return 0;
}