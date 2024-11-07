#include <bits/stdc++.h>
using namespace std;

int main(){

    string s, aux = "";
    cin>>s;
    aux = s[0];
    for(int i=1; i<s.size(); i++){
        if(s[i]!=s[i-1]) aux+=s[i];
    }
    cout<<aux<<endl;
    return 0;
}