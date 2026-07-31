#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink,lime,salt;
    drink=(k*l)/nl;
    lime=c*d;
    salt=p/np;
    int toast=min({drink,lime,salt});
    cout<<toast/n;
 
 
    return 0;
}