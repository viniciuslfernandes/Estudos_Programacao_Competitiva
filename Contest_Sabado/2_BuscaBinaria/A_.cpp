#include <bits/stdc++.h>
using namespace std;
int main(){

    set<int> valores;
    int n; cin>>n;

    for(int i=0; i<n; i++){
        int x; cin>>x;
        valores.insert(x);
    }
    int x=valores.size();
    cout<<x<<endl;
    return 0;
}
//FEITO NO CONTEST