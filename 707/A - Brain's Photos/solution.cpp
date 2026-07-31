#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    set<char>st;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            st.insert(arr[i][j]);
            
        }
    }
    bool isColor=false;
    for(char c:st){
        if(c=='C' || c=='M' || c=='Y'){
            isColor=true;
            break;
        }
    }
    if(isColor){
        cout<<"#Color";
    }
    else cout<<"#Black&White";
 
 
    return 0;
}