#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+c>b+c){
            cout<<"First
";
        }
        else if(b+c>a+c){
            cout<<"Second
";
        }
        else{
            if(c%2==0){
                cout<<"Second
";
            }
            else{
                cout<<"First
";
            }
        }
    }
    
 
    return 0;
}