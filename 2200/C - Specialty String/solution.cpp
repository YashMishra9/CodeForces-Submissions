#include <bits/stdc++.h>
using namespace std;
 
string specialty(string s,long long n){
	stack<char>st;
	for(char c:s){
		if(!st.empty() && st.top()==c){
			st.pop();		
		}
		else{
			st.push(c);
		}
	}
	if(st.empty()){
		return "YES";
	}
	else return "NO";
 
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		string s;
		cin>>s;
		cout<<specialty(s,n)<<endl;
	}
 
	return 0;
}