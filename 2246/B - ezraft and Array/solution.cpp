#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<1<<endl;
            continue;
 
        }
        if(n==2){
            cout<<-1<<endl;
            continue;
        }
        vector<long long>arr={1,2,3};
        long long start=6;
        for(int i=0;i<n-3;i++){
            arr.push_back(start);
            start*=2;
        }
        for(auto it:arr){
            cout<<it<<" ";
        }
        cout<<endl;
        
    }
}