#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int q; cin>>q;
    while(q--){
        int n; cin>>n;
        string s; cin>>s;
        string aux = "";

        int i=s.size()-1;
        while(i>=0){
            if(s[i]!= '0'){
                aux+= 'a' + s[i] - '0' - 1;
                i--;
            }else{
                aux+= 'a' +stoi(s.substr(i-2, 2))-1;
                i-=3;
            }
        }
        reverse(aux.begin(), aux.end());
        cout<<aux<<endl;
        
    }
    return 0;
}