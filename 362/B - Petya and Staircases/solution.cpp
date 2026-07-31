#include <bits/stdc++.h>
using namespace std;
 
string stairs(vector<long long>&arr,int n,int m){
    sort(arr.begin(),arr.end());
    if(m==0){
        return "YES";
    }
    // int maxi=0;
    if(arr[0]==1 || arr[m-1]==n){
        return "NO";
    }
    int cnt=0;
    for(int i=1;i<m;i++){
        if(arr[i]==arr[i-1]+1){
            cnt++;
            if(cnt==2){
                return "NO";
            }
        }
            else{
                cnt=0;
            }
            
        }
    
    return "YES";
        
    
}
int main(){
    long long n,m;
    cin>>n>>m;
    vector<long long>arr(m);
    for(auto &it:arr){
        cin>>it;
    }
    // sort(arr.begin(),arr.end());
    cout<<stairs(arr,n,m);
    
 
    return 0;
}