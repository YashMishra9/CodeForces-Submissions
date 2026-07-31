#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key=arr[k-1];
    int finish=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=key && arr[i]!=0){
            finish+=1;
        }
    }
    cout<<finish;
    return 0;
}