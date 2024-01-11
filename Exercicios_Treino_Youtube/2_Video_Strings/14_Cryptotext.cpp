#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        string aux="";
        for(int i=0; i<s.size(); i++){
            if(s[i]>=97 && s[i]<=122){
                aux+=s[i];
            }
        }
        reverse(aux.begin(), aux.end());
        cout<<aux<<endl;
    }
    return 0;
}
//https://www.beecrowd.com.br/judge/en/problems/view/2866