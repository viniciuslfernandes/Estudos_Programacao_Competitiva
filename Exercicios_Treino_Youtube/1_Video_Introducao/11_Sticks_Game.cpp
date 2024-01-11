#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;

    while(cin>>n, n!=0){
        int sum=0;
        for(int i=0; i<n; i++){
            int c, v;
            cin>>c>>v;
            if(v%2!=0){
                v--;
            }
            sum+=v;
        }
        sum= sum/4;
        cout<<sum<<endl;
    }
    return 0;
}
//https://www.beecrowd.com.br/judge/en/problems/view/1366