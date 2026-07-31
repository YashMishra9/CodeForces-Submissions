#include <bits/stdc++.h>
using namespace std;
int main(){
 
    int n;
    cin>>n;
    vector<int>arr;
   
    for(int i=1;i<=n;i++){
        arr.push_back(i);
    }   
    
    for(int i=0;i<n;i+=2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
 
    for(int i=0;i<n;i++){
        if(n%2!=0){
            cout<<"-1";
            break;
        }
        cout<<arr[i]<<" ";
    }
 
    return 0;
}