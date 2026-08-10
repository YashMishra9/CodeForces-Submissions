#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(auto &it:arr){
            cin>>it;
        }
        map<int,int>mpp;
        for(int x:arr){
            mpp[x]++;
        }
        vector<int>freq={};
        for(auto it:mpp){
            freq.push_back(it.second);
        }
        int maxi=*max_element(freq.begin(),freq.end());
        int num=-1;
        for(auto it:mpp){
            if(it.second==maxi){
                num=it.first;
                break;
            }
        }
        // cout<<num<<endl;
        int ans=0;
        int total=n-maxi;
        if(total+2>=maxi){
            for(int i=0;i<n;i++){
                ans+=arr[i];
            }
            cout<<ans<<endl;
            continue;
        }
        else{
            ans=0;
            for(int i=0;i<n;i++){
                if(arr[i]!=num){
                    ans+=arr[i];
                }
            }
                ans+=(total+2)*num;
        }
        cout<<ans<<endl;
        
 
    }
}