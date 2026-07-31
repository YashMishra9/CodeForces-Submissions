#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long n,d;
    cin>>n>>d;
   
    string s;
    vector<int>present={};
    while(d--){
        cin>>s;
    
        
        bool found=false;
        for(char c:s){
            if(c=='0'){
                
                found=true;
                break;
            }
        }
        if(found){
            present.push_back(1);
        }
        else present.push_back(0);
    }
            
        // for(auto &it:present){
        //     cout<<it<<" ";
        // }
        int count=0;
        int maxi=0;
        for(int i=0;i<present.size();i++){
            if(present[i]==1){
                count++;
                maxi=max(count,maxi);
            }
            else{
                count=0;
            }
    
        }
        cout<<maxi<<endl;
 
        
            
 
 
    return 0;
}