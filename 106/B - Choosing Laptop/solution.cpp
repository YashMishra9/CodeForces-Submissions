#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<int>speed(n),ram(n),hdd(n),cost(n);
    for(int i=0;i<n;i++){
        cin>>speed[i]>>ram[i]>>hdd[i]>>cost[i];
    }
    int ans=-1;
    long long mini=LLONG_MAX;
    for(int i=0;i<n;i++){
        bool bad=false;
        for(int j=0;j<n;j++){
            if((i!=j) && speed[i]<speed[j] && ram[i]<ram[j] && hdd[i]<hdd[j]){
                bad=true;
                break;
            }
        }
        if(!bad && cost[i]<mini){
                mini=cost[i];
                ans=i;
        }
    }
    cout<<ans+1;
 
    return 0;
}