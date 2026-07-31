#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int count=0;
        for(int i=0;i<n;i++){
            if(str[i]=='.'){
                count+=1;
            }
        }
        for(int i=0;i<n;i++){
            if(str[i]=='.' && str[i+1]=='.' && str[i+2]=='.'){
                count=2;
            }
            else{
                count=count;
            }
        }
        cout<<count<<endl;
 
    }
 
    return 0;
}