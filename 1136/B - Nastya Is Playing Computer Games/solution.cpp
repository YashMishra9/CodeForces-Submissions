#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    long long mini=min(k-1,n-k);
    long long total=mini+3*n;
    cout<<total;
    return 0;
}