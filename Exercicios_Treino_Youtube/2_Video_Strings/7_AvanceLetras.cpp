#include <bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;
    while(n--){
        string a, b;
        cin>>a>>b;
        int sum=0;
        for(int i=0; i<a.size(); i++){
            if((b[i]-'0')- (a[i]-'0')>=0){
                sum+=(b[i]-'0')- (a[i]-'0');
            }else{
                sum+= 26+(b[i]-'0')- (a[i]-'0');
            }
        }
        cout<<sum<<endl;
    }
    
    return 0;
}
//https://www.beecrowd.com.br/judge/en/problems/view/1607