#include <bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;

    while(n--){
        string a; cin>>a;
        string b; cin>>b;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if(a==b) cout<<"sim"<<endl;
        else cout<<"nao"<<endl;
    }

}