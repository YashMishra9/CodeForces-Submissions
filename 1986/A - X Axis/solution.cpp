#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int mini=INT_MAX;
        // int sum=0;
        for(int i=1;i<=max({a,b,c});i++){
            int sum=abs(i-a)+abs(i-b)+abs(i-c);
            if(sum<=mini){
                mini=sum;
            }
            else sum=0;
        }
        cout<<mini<<endl;
    }
    return 0;
}