#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,x;
        cin>>n>>x;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        arr.insert(arr.begin(),0);
        arr.push_back(x);
        sort(arr.begin(),arr.end());
        vector<int>Gap={};
        for(int i=1;i<arr.size();i++){
                Gap.push_back(arr[i]-arr[i-1]);
        }
        int Maxi=Gap[0];
        for(int i=1;i<Gap.size();i++){
            if(Gap[i]>Maxi){
                Maxi=Gap[i];
            }
        }
        int Answer=max(Maxi,2*(x-arr[arr.size()-2]));
        cout<<Answer<<endl;
 
 
    }
 
 
    return 0;
}