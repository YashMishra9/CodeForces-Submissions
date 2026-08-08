#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int runs=1;
	    for(int i=1;i<n;i++){
	        if(s[i]!=s[i-1]){
	            runs++;
	        }
	    }
	    bool reduceBy2=false;
        bool reduceBy1=false;
        for (int i=1;i<n-1;i++){
            if(s[i-1]==s[i + 1] && s[i]!=s[i-1]) {
                reduceBy2=true;
                break;
            }
            if(s[i-1]!=s[i] && s[i]!=s[i+1]){
                reduceBy1=true;
            }
        }
        if(reduceBy2)
            cout<<runs-2<<'
';
        else if(reduceBy1)
            cout<<runs-1<<'
';
        else
            cout<<runs<<'
';
    
	}
 
}