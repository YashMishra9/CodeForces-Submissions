#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>arr={};
        long long ini=10000;
        while(n>0){
            long long div=n/ini;
            arr.push_back(ini*div);
            n%=ini;
            ini/=10;
        }
        vector<long long>final={};
        for(auto &it:arr){
            if(it!=0){
                final.push_back(it);
            }        
        }
        cout<<final.size()<<endl;
        for(auto &it:final){
                cout<<it<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}