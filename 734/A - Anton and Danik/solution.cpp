#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    string s;
    cin>>s;
    int cntA=0,cntD=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            cntA+=1;
        }
        else cntD+=1;
    }
    if(cntA==cntD){
        cout<<"Friendship";
    }
    else if(cntA>cntD){
        cout<<"Anton";
    }
    else cout<<"Danik";
    return 0;
}