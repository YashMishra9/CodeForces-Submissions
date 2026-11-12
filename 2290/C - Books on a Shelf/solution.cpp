#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>arr(n);
        for(auto &it:arr){
            cin>>it;
        }
        vector<long long>left;
        vector<long long>right;
        vector<long long>mid;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;){
            left.push_back(arr[i]);
            int j=i+1;
            while(j<n && arr[j]==arr[i]){
                if(j==i+1){
                    right.push_back(arr[i]);
                }
                else{
                    mid.push_back(arr[i]);
                }
                j++;
            }
            i=j;
        }
        reverse(right.begin(),right.end());
        int ans=left.size()+right.size();
        cout<<ans<<endl;
        for(auto it:left){
            cout<<it<<" ";
        }
        for(auto it:mid){
            cout<<it<<" ";
        }
        for(auto it:right){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}