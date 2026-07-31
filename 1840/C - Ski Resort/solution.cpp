#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,k,q;
        cin>>n>>k>>q;
        vector<long long>arr(n);
        for(auto &it:arr){
            cin>>it;
            it=(it>q)?0:1;
        }
      
        long long count1=0;
        long long ways=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                count1++;
            }
            else {
                if(count1>=k){
                    long long diff=count1-k+1;
                     ways+=(diff*(diff+1))/2;
                }
                count1=0;
            }
        }
        if(count1>=k){
            long long diff=count1-k+1;
            ways+=(diff*(diff+1))/2;
        }
        cout<<ways<<endl;
 
 
    }
    return 0;
}