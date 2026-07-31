#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int first1=-1,last1=-1;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==1 && first1==-1){
                first1=i;
            }
            if(x==1){
                last1=i;
            }
        }
        if(first1==-1 || last1-first1+1<=k){
            cout<<"YES
";
        }
        else cout<<"NO
";
    }
    return 0;
}