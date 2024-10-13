#include <bits/stdc++.h>
using namespace std;
int main(){

    int x, x1, y, y1;
    cin>>x>>y>>x1>>y1;

    int resp =0;

    resp = abs(x - x1) + abs( y - y1);
    cout<<resp<<endl;
    return 0;
}