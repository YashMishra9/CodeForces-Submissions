#include <bits/stdc++.h>
using namespace std;
 
string dots(int n){
    int start=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            start-=(2*i-1);
            if(start<=(-1*n) || start>=n){
                return "Kosuke";
            }
        }
        else if(i%2==0){
            start+=(2*i-1);
             if(start<=(-1*n) || start>=n){
                return "Sakurako";
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<dots(n)<<endl;
    }
    return 0;
}