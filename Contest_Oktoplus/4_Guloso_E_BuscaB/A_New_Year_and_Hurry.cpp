#include <bits/stdc++.h>
using namespace std;
int main(){

    int n, k; cin>>n>>k;
    int horario=240-k;
    int tot=0;
    for(int i=1; i<=n; i++){
        if(horario-(i*5)>=0){
            horario-= i*5;
            tot++;
        }
    }
    cout<<tot<<endl;
    return 0;
}