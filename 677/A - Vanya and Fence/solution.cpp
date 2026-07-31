#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
    vector<int>arr(n);
    for(auto &it:arr){
        cin>>it;
    }
    int width=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=h){
            width+=1;
        }
        else width+=2;
    }
    cout<<width;
 
    return 0;
}