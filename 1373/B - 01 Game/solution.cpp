#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count1=0,count0=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                count0++;
            }
            else count1++;
        }
        int operations=min(count1,count0);
        if(operations%2!=0){
            cout<<"DA"<<endl;
        }
        else cout<<"NET"<<endl;
    }
 
    return 0;
}