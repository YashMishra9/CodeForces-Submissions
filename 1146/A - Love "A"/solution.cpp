#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int maxi=0;
    int len=0;
    int total=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'){
            total+=1;
        }
       else continue;
    }
    int n=s.length();
    cout<<min(n,2*total-1);
 
    return 0;
}