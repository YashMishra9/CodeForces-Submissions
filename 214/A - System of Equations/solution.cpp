#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int count=0;
    int a=sqrt(n);
    int b=sqrt(m);
    for(int i=0;i<=a;i++){
        for(int j=0;j<=b;j++){
                if((i*i+j)==n && (i+j*j)==m){
                    count+=1;
                }
        }
    }
    cout<<count;
 
 
 
    return 0;
}