#include <bits/stdc++.h>
using namespace std;
 
string  ratings(vector<int> first,vector<int> second,int n){
        for(int i=0;i<n;i++){
            if(first[i]>=2400 && second[i]>first[i]){
                return "YES";
            }
    }
    return "NO";
        
}
int main(){
 
    int n;
    cin>>n;
    vector<string>names(n);
    vector<int>ratingfirst(n),ratingsecond(n);
    for(int i=0;i<n;i++){
            cin>>names[i]>>ratingfirst[i]>>ratingsecond[i];
    }
 
   
        
    cout<<ratings(ratingfirst,ratingsecond,n);
    return 0;
}