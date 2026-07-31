#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        map<char,int>mpp;
        for(char c:s){
            mpp[c]++;
        }
        for(auto it:mpp){
            if(it.second>=2){
                cnt+=(1+it.second);
            }
            else if(it.second==1){
                cnt+=2;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}