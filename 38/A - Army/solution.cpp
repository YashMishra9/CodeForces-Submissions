#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n-1);
    for(auto &it:arr){
        cin>>it;
    }
    int a,b;
    cin>>a>>b;
    int sum=0;
    for(int i=a-1;i<b-1;i++){
        sum+=arr[i];
    }
    cout<<sum;
 
    return 0;
}