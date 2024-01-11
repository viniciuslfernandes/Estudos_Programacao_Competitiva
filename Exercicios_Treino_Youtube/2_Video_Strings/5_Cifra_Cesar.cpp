#include <bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;
    while(n--){
        string s; cin>>s;
        int a; cin>>a;
        for(int i=0; i<s.size(); i++){
            s[i]-=a;
            if(s[i]<'A'){
                s[i]+=26;
            }
            cout<<s[i];
        }
        cout<<endl;
    }

    return 0;
}
//https://www.beecrowd.com.br/judge/en/problems/view/1253