#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>sequence={};
        string s;
        while(n--){
            cin>>s;
            for(int i=0;i<s.length();i++){
                if(s[i]=='#'){
                    sequence.push_back(i+1);
                }
            }   
        }
        reverse(sequence.begin(),sequence.end());
        for(auto &it:sequence){
            cout<<it<<" ";
        }    cout<<endl;
 
            
            
    }
    return 0;
}