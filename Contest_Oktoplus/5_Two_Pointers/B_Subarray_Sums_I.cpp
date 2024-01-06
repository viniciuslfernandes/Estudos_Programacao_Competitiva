#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x; cin>>n>>x;
    vector <int> vet(n);

    for(int i=0; i<n; i++){
        cin>>vet[i];
    }
    int som=0, tot=0;
    for(int i=0, j=0; i<n; i++){
        som+=vet[i];
        while(som>x){
            som-=vet[j];
            j++;
        }
        if(som==x){
            tot++;
        }
    }
    cout<< tot<<endl;
    return 0;
}