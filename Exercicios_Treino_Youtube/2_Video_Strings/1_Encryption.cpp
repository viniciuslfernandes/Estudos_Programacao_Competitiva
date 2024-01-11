#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    while(n--){
        string s;
        getline(cin>>ws, s);
       
        for(int i=0; i<s.size(); i++){
            if(s[i]>=65 && s[i]<=122){
                s[i]= s[i]+3;
            }
        }
        reverse(s.begin(), s.end());
        for(int i=s.size()/2; i<s.size(); i++){
            s[i]=s[i]-1;
        }
        for(int i=0; i<s.size(); i++){
            cout<<s[i];
        }
        cout<<endl;

    }
    return 0;
}
//https://www.beecrowd.com.br/judge/en/problems/view/1024