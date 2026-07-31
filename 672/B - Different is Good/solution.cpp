#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    string s;
    cin>>s;
 
    if(n>26){
        cout<<-1;
        return 0;
    }
    set<char>st;
    for(char ch:s){
        st.insert(ch);
    }
    cout<<n-(int)st.size();
 
    return 0;
}