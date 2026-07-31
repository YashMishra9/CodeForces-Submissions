#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int sum=0;
    char cur='a';
    
    for(char ch:s){
        int diff=abs(ch-cur);
        sum+=min(diff,26-diff);
        cur=ch;
    }
    cout<<sum;
    
 
 
 
    return 0;
}