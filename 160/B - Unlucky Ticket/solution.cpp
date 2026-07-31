#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>arr={};
    for(char c:s){
        arr.push_back(c-'0');
    }
    // reverse(arr.begin(),arr.end());
    
    vector<int>first={};
    vector<int>last={};
    for(int i=0;i<arr.size()/2;i++){
        first.push_back(arr[i]);
    }
    for(int i=arr.size()/2;i<arr.size();i++){
        last.push_back(arr[i]);
    }
    sort(first.begin(),first.end());
    sort(last.begin(),last.end());
    
    bool Allgreat=true;
    bool Allsmall=true;
    int cnt=0;
    for(int i=0;i<first.size();i++){
        if(first[i]>=last[i]){
            Allsmall=false;
        }
        if(last[i]>=first[i]){
            Allgreat=false;
        }
    }
    if(Allsmall || Allgreat){
        cout<<"YES";
    }
    else cout<<"NO";
 
 
    return 0;
}