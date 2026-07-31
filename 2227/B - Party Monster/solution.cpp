#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        long long cnt1=0,cnt2=0;
        for(char c:s){
            if(c=='('){
                cnt1++;
            }
            else if(c==')'){
                cnt2++;
            }
        }
        if(cnt1==cnt2){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
 
    }
    return 0;
}