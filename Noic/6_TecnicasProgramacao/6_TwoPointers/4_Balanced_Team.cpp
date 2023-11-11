#include <bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;
    vector <int> vet(n);
    for(int i=0; i<n; i++){
        cin>>vet[i];
    }
    sort(vet.begin(), vet.end());
    
    int equipe=1, aux=vet[0], som=1;
    for(int i=1, j=1; i<n;){
        if(abs(aux-vet[i])<=5){
            som++;
            if(som>equipe){
                equipe++;
            }
            i++;
        }else{
            som--;
            aux=vet[j];
            j++;
        }
    }
    cout<<equipe<<endl;
    return 0;
}
