#include <bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin>>t;
 
	while(t--){
		long long n;
		cin>>n;
		vector<long long>arr(n);
		for(auto &it:arr){
			cin>>it;
		}
		int cnt=0;
		int maxi=*max_element(arr.begin(),arr.end());
		for(int i=0;i<n;i++){
			if(arr[i]==maxi){
				cnt+=1;
			}
		}
		cout<<cnt<<endl;
	}
 
	return 0;
}