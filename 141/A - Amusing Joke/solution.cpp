#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2,s3;
    cin>>s1;
    cin>>s2;
    cin>>s3;
 
    string str=s1+s2;
    multiset<char>String1;
    for(char c:str){
        String1.insert(c);
    }
 
    multiset<char>String2;
    for(char c:s3){
        String2.insert(c);
    }
    string result;
    if(String1==String2){
            result="YES";
    }
    else{
            result="NO";
    }
        
    
 
    cout<<result;
    return 0;
}