#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

ull numBinario(string s){
    ull num=0;
    
    for(int i=s.size()-1, j=0; i>=0; i--, j++){
        
        num+= pow(2, j)*(s[i]-'0');
    }
    return num;
}

int main(){

    int n; cin>>n;
    while(n--){
        string s; cin>>s;
        cout<<numBinario(s)<<endl;
    }
    return 0;
}