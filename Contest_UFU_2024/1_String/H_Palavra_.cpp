#include <bits/stdc++.h>
using namespace std;
int main(){

    string s;
    getline(cin>>ws, s);
    int n; cin>>n;

    for(int i=0; i<s.size(); i++){
        if(s[i]>=65 and s[i]<=90){

            if(s[i]+n>90) s[i]= s[i]-26 + n;
            else s[i]+=n;
        }
        else if(s[i]>=97 and s[i]<=122){
            
            if(s[i]+n>122) s[i]= s[i]-26 + n;
            else s[i]+=n;
        }
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}