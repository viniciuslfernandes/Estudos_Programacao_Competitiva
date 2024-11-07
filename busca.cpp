#include <bits/stdc++.h>
using namespace std;

int busca_prim(vector<int> &v, int x) {
    int i = 0, f = v.size() - 1, m, resp=-1;
    while(f >= i) {
        m = i + (f - i)/2;
        if(v[m] == x){
            resp=m;
            f =m-1 ;
        }   
        else if(x < v[m])
            f = m - 1;
        else
            i = m + 1;
    }
    
    return resp;
}
int busca_ult(vector<int> &v, int x) {
    int i = 0, f = v.size() - 1, m, resp=-1;
    while(f >= i) {
        m = i + (f - i)/2;
        if(v[m] == x){
            resp=m;
            i =m+1 ;
        }   
        else if(x < v[m])
            f = m - 1;
        else
            i = m + 1;
    }
    
    return resp;
}
int busca_count(vector<int> &v, int x) {
    int primeiro = busca_prim(v, x), ultimo = busca_ult(v, x);
    if(primeiro == -1 && ultimo ==-1){
        return -1;
    }
    else if(primeiro==ultimo){
        return max(primeiro, ultimo);
    }else{
        return ultimo-primeiro+1;
    }
}

int busca_X_or_maiorX(vector<int> &v, int x) {
    int i = 0, f = v.size() - 1, m, resp=-1;
    while(f >= i) {
        m = i + (f - i)/2;
        if(v[m] >= x){
            resp=m;
            f =m - 1 ;
        }   
        else
            i = m + 1;
    }
    
    return resp;
}

int main(){
    int n, m;
    cin>>n>>m;
    vector<int> vet(n);

    for(int i=0; i<n; i++){
        cin>>vet[i];
    }

    int x;
    for(int i=0; i<m; i++){
        cin>>x;
        // cout<<busca_prim(vet, x)<<endl;
        // cout<<busca_ult(vet, x)<<endl;
    }
    return 0;
}