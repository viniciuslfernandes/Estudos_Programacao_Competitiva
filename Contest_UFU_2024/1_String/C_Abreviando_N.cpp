#include <bits/stdc++.h>
using namespace std;
int main(){

    string s;
    getline(cin>>ws, s);
    for(int i=0; i<s.size(); i++){
        while(s[i]!=' ' or i<s.size()){
            cout<<s[i];
            i++;
        }
        
    }
    return 0;
}