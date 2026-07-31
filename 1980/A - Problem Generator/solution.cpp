#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        int cntA=0,cntB=0,cntC=0,cntD=0,cntE=0,cntF=0,cntG=0;
        for(char c:s){
            if(c=='A'){
                cntA++;
            }
            else if(c=='B'){
                cntB++;
            }
            else if(c=='C'){
                cntC++;
            }
            else if(c=='D'){
                cntD++;
            }
            else if(c=='E'){
                cntE++;
            }
            else if(c=='F'){
                cntF++;
            }
            else if(c=='G'){
                cntG++;
            }
        }
        int finalCnt=0;
        if(cntA<m){
            finalCnt+=m-cntA;
        }
        if(cntB<m){
            finalCnt+=m-cntB;
        }
        if(cntC<m){
            finalCnt+=m-cntC;
        }
        if(cntD<m){
            finalCnt+=m-cntD;
        }
        if(cntE<m){
            finalCnt+=m-cntE;
        }
        if(cntF<m){
            finalCnt+=m-cntF;
        }
        if(cntG<m){
            finalCnt+=m-cntG;
        }
        cout<<finalCnt<<endl;
 
    }
    return 0;
}