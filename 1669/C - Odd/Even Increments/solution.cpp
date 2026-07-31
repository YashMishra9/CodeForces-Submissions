#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<long long>arr(n);
	    for(auto &it:arr){
	        cin>>it;
	    }
	    vector<long long>odds={};
	    vector<long long>evens={};
	    for(int i=0;i<n;i++){
	        if(i%2==0){
	            odds.push_back(arr[i]);
	        }
	        else evens.push_back(arr[i]);
	    }
	    int cnt11=0,cnt10=0,cnt21=0,cnt20=0;
	    
	    bool ok=true;
	    vector<int>check1={};
	    vector<int>check2={};
	    for(int i=0;i<odds.size();i++){
         if(odds[i]%2==0){
        check1.push_back(0);
        cnt10++;
    }
    else{
        check1.push_back(1);
        cnt11++;
    }
}
 
for(int i=0;i<evens.size();i++){
    if(evens[i]%2==0){
        check2.push_back(0);
        cnt20++;
    }
    else{
        check2.push_back(1);
        cnt21++;
    }
}
	    if (
    (
        (cnt11==0 && cnt10==check1.size()) ||
        (cnt11==check1.size() && cnt10==0)
    )
    &&
    (
        (cnt21==0 && cnt20==check2.size()) ||
        (cnt21==check2.size() && cnt20==0)
    )
){
    cout<<"YES
";
}
else{
    cout<<"NO
";
};
	}
 
}