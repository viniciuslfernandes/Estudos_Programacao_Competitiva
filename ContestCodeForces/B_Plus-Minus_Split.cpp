#include <bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;
    for(int k=0; k<t; k++){
        int n; cin>>n;
        string s;
        cin>>s;
        int mais=0, menos=0;
        for(int i=0; i<n; i++){
            if(s[i]=='+') mais++;
            else menos++;
        }
        cout<<abs(mais-menos)<<endl;
    }

    return 0;
}
//https://codeforces.com/contest/1919/problem/B