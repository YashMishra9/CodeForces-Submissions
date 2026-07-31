#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int countSame=0;
    int countDiff=0;
    countSame=min({a,b});
    countDiff=abs(a-b)/2;
    cout<<countSame<<" "<<countDiff;
 
    return 0;
}