#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    vector<long long>arr(n);
    for(auto &it:arr){
        cin>>it;
    }
    long long sum=0;
    for(int i=1;i<n;i++){
        if(arr[i]+arr[i-1]<k){
            int diff=k-(arr[i]+arr[i-1]);
            // arr[i]+=k-(arr[i]+arr[i-1]);
            arr[i]+=diff;
            // sum+=k-(arr[i]+arr[i-1]);
            sum+=diff;
        }
        else continue;
    }
    cout<<sum<<endl;
    for(auto &it:arr){
        cout<<it<<" ";
    }
 
    
    return 0;
}