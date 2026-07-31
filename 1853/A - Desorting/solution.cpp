#include <bits/stdc++.h>
using namespace std;
 
bool sortedcheck(int n,vector<int>arr){
    bool check=true;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
                check=false;
                break;
        }
       
    }
    return check;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);  
        for(auto &it:arr){
            cin>>it;
        }
 
        if(!sortedcheck(n,arr)){
            cout<<0<<endl;
            continue;
        }
        
        
        
        vector<int>diff;
        for(int i=1;i<n;i++){
            diff.push_back(abs(arr[i]-arr[i-1]));
        }
        int mini=*min_element(diff.begin(),diff.end());
        cout<<(mini/2)+1<<endl;
        
        
        
 
        
    }
 
 
    return 0;
}