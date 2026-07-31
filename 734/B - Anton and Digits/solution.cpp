#include <bits/stdc++.h>
using namespace std;
int main(){
    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    int mini=min({k2,k5,k6});
    int sum=0;
    sum+=mini*256;
    k2-=mini;
    k5-=mini;
    k6-=mini;
    int mini2=min({k3,k2});
    sum+=mini2*32;
    cout<<sum;
 
    return 0;
}