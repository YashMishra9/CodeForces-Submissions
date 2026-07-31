#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int div5,div3,div4,div2,div1;
    div5=x/5;
    x=x%5;
    div4=x/4;
    x=x%4;
    div3=x/3;
    x=x%3;
    div2=x/2;
    x=x%2;
    div1=x/1;
    x=x%1;
    cout<<div1+div2+div3+div4+div5;
 
    return 0;
}