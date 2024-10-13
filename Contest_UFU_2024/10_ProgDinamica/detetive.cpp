#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    while(cin>>n, n!=0){
        set<pair<int, int>> pos;
        for(int i=1; i<=n; i++ ){
            int aux; cin>>aux;
            pos.insert(make_pair(aux, i));
        }

        auto it = pos.end();
        it--;
        it--;
        cout<<it->second <<endl;

    }

    return 0;
}