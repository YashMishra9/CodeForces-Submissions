#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<double>arr(n);
    for(auto &it:arr){
        cin>>it;
    }
    double sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i]/100;
    }
    double div=sum/n;
    cout<<setprecision(10)<<div*100;
 
 
    return 0;
}