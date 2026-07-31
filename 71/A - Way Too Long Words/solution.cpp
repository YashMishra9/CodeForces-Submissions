#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
            if(arr[i].size()>10){
                string s=arr[i];
                arr[i]=s[0]+to_string(s.size()-2)+s.back();
    }
}
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
 
 
    return 0;
}