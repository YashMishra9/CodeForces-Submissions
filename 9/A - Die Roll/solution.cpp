#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int maxi=max({x,y});
    int diff=6-maxi+1;
    int g=__gcd(diff,6);
 
    cout<<diff/g<<"/"<<6/g<<endl;
 
 
    return 0;
}