#include <bits/stdc++.h>
using namespace std;
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
        int diff;
        // int mini=0;
        vector<int>differ;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                diff=abs(arr[j]-arr[i]);
                differ.push_back(diff);
            }
        }
        int mini=*min_element(differ.begin(),differ.end());
        cout<<mini<<endl;
    }
 
    return 0;
}