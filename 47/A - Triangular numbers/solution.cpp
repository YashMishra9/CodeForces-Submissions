#include <bits/stdc++.h>
using namespace std;
 
bool Search(vector<int>arr,int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
        return 0;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr={};
    for(int i=1;i<=500;i++){
            arr.push_back((i*(i+1))/2);
    }
    string result;
    bool found=Search(arr,500,n);
    if(found){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
 
    return 0;
}