#include <bits/stdc++.h>
using namespace std;
 
string games(vector<int>first,vector<int>second,int n){
    int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
            if(first[i]>second[i]){
                    cnt1+=1;
            }
            else if(first[i]<second[i]){
                cnt2+=1;
            }
            else continue;
        }
 
        if(cnt1>cnt2){
            return "Mishka";
        }
        else if(cnt2>cnt1){
           return "Chris";
        }
        else return "Friendship is magic!^^";
}
int main(){
    int n;
    cin>>n;
    vector<int>mishka(n),chris(n);
    for(int i=0;i<n;i++){
        cin>>mishka[i]>>chris[i];
    }
    cout<<games(mishka,chris,n);
 
    return 0;
}