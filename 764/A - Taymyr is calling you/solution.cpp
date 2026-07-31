#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,z;
    cin>>n>>m>>z;
    vector<int>timesN;
    vector<int>timesM;
    for(long long i =n;i<= z;i+= n) {
        timesN.push_back(i);
    }
 
    
    for(long long i=m;i<= z;i+= m) {
        timesM.push_back(i);
    }
    vector<int>temp={};
    map<int,int>freq;
    for(int x:timesN){
        freq[x]++;
    }    
    for(int x:timesM){
        if(freq[x]>0){
            temp.push_back(x);
            freq[x]--;
        }
    }
    cout<<temp.size();
 
 
    return 0;
}