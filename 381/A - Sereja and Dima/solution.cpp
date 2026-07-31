#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(auto &it:arr){
        cin>>it;
    }
    int left=0;
    int right=n-1;
    int sereja=0,dima=0;
    bool turn =true;
    while(left<=right){
        int val;
        if(arr[left]>arr[right]){
            val=arr[left];
            left++;
        }
        else{
            val=arr[right];
            right--;
        }
        if(turn){
            sereja+=val;
        }
        else{
            dima+=val;
        }
        turn =!turn;
    }
    cout<<sereja<<" "<<dima;
    return 0;
}