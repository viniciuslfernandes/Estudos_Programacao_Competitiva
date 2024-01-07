#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;
    while(t--){
        int a,b; cin>>a>>b;
        if((a+b)%2==0){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
    }
    
    return 0;
}
//https://codeforces.com/contest/1919/problem/A