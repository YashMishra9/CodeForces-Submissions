#include <bits/stdc++.h>
using namespace std;
int main(){
    set<char>name;
    string s;
    cin>>s;
 
    for(char ch:s){
        name.insert(ch);
    }
    int size=name.size();
    if(size%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<< "IGNORE HIM!";
    }
    return 0;
        
}
    
    