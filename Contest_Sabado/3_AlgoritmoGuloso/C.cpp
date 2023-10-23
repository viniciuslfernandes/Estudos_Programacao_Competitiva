#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;cin>>t;

    while(t--){
        int n; cin>>n;
        int som=0;
        vector<int>vet(n);
        for(int i=0; i<n; i++){
            cin>>vet[i];
        }
        sort(vet.rbegin(), vet.rend());
        for(int i=0; i<n; i++){
            som+=vet[i]-vet[vet.size()-1];
        }
        cout<<som<<endl;
    }
    return 0;
}