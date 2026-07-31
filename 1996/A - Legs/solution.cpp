#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long count4=0,count2=0;
        // while(n>0){
            count4+=n/4;
            
            n%=4;
        // }
        count2+=n/2;
        cout<<count4+count2<<endl;
 
          
    }
    return 0;
}