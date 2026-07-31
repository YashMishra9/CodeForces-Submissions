#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>arr(n);
    for(int i=0;i<n;i++){
                cin>>arr[i];
    }
    bool done=false;
    for(int i=0;i<n;i++){
        if(done){
            break;
        }
        for(int j=0;j<5;j+=3){
            if(arr[i][j]=='O' && arr[i][j+1]=='O'){
                
                cout<<"YES"<<endl;
                arr[i][j]='+';
                arr[i][j+1]='+';
                done=true;
                break;
            }
          
    }
}
 
    if(!done){
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
                cout<<arr[i][j];
        }
        cout<<endl;
        }
 
 
    
 
    return 0;
}