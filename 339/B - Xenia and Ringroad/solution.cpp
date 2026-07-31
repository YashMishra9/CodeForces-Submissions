#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m;
    vector<long long>arr(m);
    for(auto &it:arr){
        cin>>it;
    }
    long long sum=arr[0]-1;
    
    for(int i=1;i<m;i++){
        long long diff=abs(arr[i]-arr[i-1]);
        if(arr[i]>=arr[i-1]){
            sum+=diff;
        }
        else if(arr[i]<arr[i-1]){
            sum+=n-diff;
        }
    }
    cout<<sum;
 
 
    return 0;
}