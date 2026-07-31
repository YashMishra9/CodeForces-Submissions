#include <bits/stdc++.h>
using namespace std;
int findout(string s1,string s2){
        for(int i=0;i<s1.size();i++){
        if(s1[i]>='A' && s1[i]<='Z'){
            s1[i]=s1[i]-'A'+'a';
        }
        else continue;
    }
    for(int i=0;i<s1.size();i++){
        if(s2[i]>='A' && s2[i]<='Z'){
            s2[i]=s2[i]-'A'+'a';
        }
        else continue;
    }
 
    for(int i=0;i<s1.size();i++){
        if(s1[i]==s2[i]){
            continue;
        }
        else if(s1[i]-'a'+'0'>s2[i]-'a'+'0'){
           return 1;
        }
        else{
            return -1;
        }
    }
    return 0;
}
int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    cout<<findout(s1,s2);
 
 
    return 0;
}