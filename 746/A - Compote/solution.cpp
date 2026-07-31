#include <bits/stdc++.h>
using namespace std;
 
 
int fruits(int a,int b,int c){
    int Acomp=a;
    int Bcomp=b/2;
    int Ccomp=c/4;
    int TotalComp=min({Acomp,Bcomp,Ccomp});
    return TotalComp*7;
}
 
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    
    cout<<fruits(a,b,c);
    return 0;
}