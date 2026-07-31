#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        set<char>st;
        for(char c:s){
            st.insert(c);
        }
        if(st.size()==1){
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
            for(int i=0;i<s.length();i++){
                for(int j=i+1;j<s.length();j++){
                    if(s[i]!=s[j]){
                        swap(s[i],s[j]);
                        break;
                    }
                    
                }
            }
            
            cout<<s<<endl;
        }
    }
    return 0;
}