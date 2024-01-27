#include <bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;
    while(n--){
        int x1 , x2, x3, x4;
        int y1, y2, y3, y4;
        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>x3>>y3;
        cin>>x4>>y4;
        int resp = 0;
        if(x1==x2){
            resp = abs(y1-y2);
            resp*=resp;
        }else if(x1==x3){
            resp = abs(y1-y3);
            resp*=resp;
        }else{
            resp = abs(y1-y4);
            resp*=resp;
        }
        cout<<resp<<endl;
    }
    return 0;
}