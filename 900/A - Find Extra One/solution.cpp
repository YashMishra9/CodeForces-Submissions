#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long arr[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    long long left=0,right=0;
    for(int i=0;i<n;i++){
        if((arr[i][0]>0)){
            right+=1;
        }
        else if((arr[i][0]<0)){
            left+=1;
        }
    }
    if(min(left,right)<=1){
        cout<<"YES";
    }
    else cout<<"NO";
 
}