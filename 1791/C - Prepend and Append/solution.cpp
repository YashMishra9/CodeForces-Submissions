#include <bits/stdc++.h>
using namespace std;
 
int finalString(int &n,string s){
    int start=0;
    int end=s.size()-1;
    while(start<end){
        if(s[start]!=s[end]){
            n-=2;
            start++;
            end--;
        }
        else{
            break;
        }
}
    return n;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;  
        cin>>n;
        string s;
        cin>>s;
        cout<<finalString(n,s)<<endl;
 
    }
 
    return 0;
}