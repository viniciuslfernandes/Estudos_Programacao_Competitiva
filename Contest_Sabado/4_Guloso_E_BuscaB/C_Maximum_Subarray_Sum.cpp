#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    int n, num; cin>>n;
    ll max=0, atual=0;

    vector<int> vet(n);

    for(int i=0; i<n; i++){
        cin>>vet[i];
        atual+=vet[i];
        if(atual<vet[i]){
            atual=vet[i];
        }
        if(atual>max){
            max=atual;
        }
    }
   
    cout<<max<<endl;
    return 0;
}