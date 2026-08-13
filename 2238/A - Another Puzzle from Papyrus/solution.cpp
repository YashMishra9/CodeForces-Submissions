#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,c;
	    cin>>n>>c;
	    vector<int>a(n),b(n);
	    for(auto &it:a){
	        cin>>it;
	    }
	    for(auto &it:b){
	        cin>>it;
	    }
	    bool possible=true;
	    int ans1=0;
	    for(int i=0;i<n;i++){
	        if(b[i]>a[i]){
	            possible=false;
	            break;
	        }
	        ans1+=a[i]-b[i];
	    }
	    int ans=0;
	    if(possible){
	        ans=ans1;
	    }
	    else{
	        ans=INT_MAX;
	    }
	    sort(a.begin(),a.end());
	    sort(b.begin(),b.end());
	    
	    int ans2=c;
	    possible=true;
	    for(int i=0;i<n;i++){
        if(a[i]<b[i]){
            possible=false;
            break;
        }
        ans2+=a[i]-b[i];
    }
    if(possible)
        ans=min(ans, ans2);
 
    if(ans==INT_MAX)
        cout<<-1<<'
';
    else
        cout<<ans<<'
';
	}
 
}