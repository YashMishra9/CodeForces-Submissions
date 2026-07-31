#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    vector<char>arr;
    for(char c:s){
        if(isalpha(c)){
            arr.push_back(c);
        }
    }
   
    set<char>st;
    for(char x:arr){
        st.insert(x);
    }
    cout<<st.size();
    return 0;
}