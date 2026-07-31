#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(char &ch:s){
        if(ch>='A' && ch<='Z'){
            ch=ch-'A'+'a';
        }
        else ch=ch;
    }
    set<char>nigga;
    for(char &ch:s){
        nigga.insert(ch);
    }
    if(nigga.size()==26){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
 
    return 0;
}