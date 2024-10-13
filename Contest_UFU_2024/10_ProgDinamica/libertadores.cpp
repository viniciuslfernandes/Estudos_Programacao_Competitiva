#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;

    while(n--){
        int a, b, c, d;
        char x;
        cin>>a>>x>>b;
        cin>>c>>x>>d;
        
        if(a+d>b+c){
            cout<<"Time 1"<<endl;
        }
        else if(b+c>a+d){
            cout<<"Time 2"<<endl;
        }else{
            if(b>d){
                cout<<"Time 2"<<endl;
            }
            else if(d>b){
                cout<<"Time 1"<<endl;
            }
            else{
                cout<<"Penaltis"<<endl;
            }
        }
    }
    return 0;
}