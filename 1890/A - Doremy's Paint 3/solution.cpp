#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(auto &it:arr){
            cin>>it;
        }
        map<int,int>freq;
        for(int x:arr){
            freq[x]++;
        }
        if(freq.size()>=3){
            cout<<"NO"<<endl;
        }
        else{
            int freq1=freq.begin()-> second;
            int freq2=freq.rbegin()-> second;
            if(freq1==freq2){
                cout<<"YES"<<endl;
            }
            else if(n%2==1 && abs(freq1-freq2)==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
 
    }
 
 
    return 0;
}