#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count1=0,count2=0,count3=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            count1+=1;
        }
        else if(s[i]=='2'){
            count2+=1;
        }
        else if(s[i]=='3'){
            count3++;
        }
    }
    int idx=0;
    for(int i=0;i<count1;i++){
        s[idx]='1';
        idx+=2;
    }
    for(int i=0;i<count2;i++){
        s[idx]='2';
        idx+=2;
    }
    for(int i=0;i<count3;i++){
        s[idx]='3';
        idx+=2;
    }
    cout<<s;
 
    return 0;
}