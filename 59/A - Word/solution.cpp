#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int lower=0;
    int upper=0;
    for(char ch:s){
        if(islower(ch)){
            lower+=1;
        }
        else if(isupper(ch)){
            upper+=1;
        }
    }
    if(lower>=upper){
        for(char &ch:s){
            if(ch>='A' && ch<='Z'){
                ch=ch-'A'+'a';
            }
            else{
                ch=ch;
            }
        }
    }
    else{
        for(char &ch:s){
            if(ch>='a' && ch<='z'){
                ch=ch-'a'+'A';
            }
            else{
                ch=ch;
            }
        }
    }
    cout<<s;
 
    return 0;
}