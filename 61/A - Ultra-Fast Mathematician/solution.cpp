#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    for(int i=0;i<s1.size();i++){
        cout<<(s1[i]!=s2[i]);
    }
    return 0;
}