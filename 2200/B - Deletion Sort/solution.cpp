#include <bits/stdc++.h>
using namespace std;
 
int elements(vector<long long>arr,int n){
	if(n==1){
		return 1;
	}
	if(is_sorted(arr.begin(),arr.end())){
		return n;
	}
	else return 1;
}
int main(){
	long long t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<long long>arr(n);
		for(auto &it:arr){
			cin>>it;
		}
		cout<<elements(arr,n)<<endl;
		
 
	}
 
 
	return 0;
}