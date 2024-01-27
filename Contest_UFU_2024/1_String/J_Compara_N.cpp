#include <bits/stdc++.h>
using namespace std;
int main(){

    string s, x;
    getline(cin>>ws, s);
    getline(cin>>ws, x);
    if(s == x and s.size()==x.size()){
        cout<<"1"<<endl;
    }else{
        cout<<"0"<<endl;
    }
    return 0;
}