#include <bits/stdc++.h>
using namespace std;
string checkSum(int a,int b,int c){
    if(a+b==c || b+c==a || a+c==b){
        return "YES";
    }
    return "NO";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<checkSum(a,b,c)<<endl;
    }
    return 0;
}