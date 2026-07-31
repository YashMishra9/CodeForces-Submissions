#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long temp=n;
        int cnt2=0,cnt3=0;
        while(temp%2==0){
            temp/=2;
            cnt2+=1;
        }
        while(temp%3==0){
            temp/=3;
            cnt3+=1;
        }
        if(temp!=1){
            cout<<-1<<endl;
        }
        else if(cnt2>cnt3){
            cout<<-1<<endl;
        }
        else{
            cout<<2*cnt3-cnt2<<endl;
        }
        
  }
 
    return 0;
}