#include <bits/stdc++.h>
using namespace std;
int main(){

    int n, b;
    while(cin>>n>>b){
        if(n==0 && b==0) break;
        vector <int> vet(b);
        for(int i=0; i<b; i++){
            cin>>vet[i];
        }
        vector<bool> aux(n+1);
        for(int i=0; i<=n; i++){
            aux[i]=false;
        }
        for(int i=0; i<b; i++){
            for(int j=i; j<b; j++){
                aux[abs(vet[j]-vet[i])]= true;
            }
        }
        int a=0;
        for(int i=0; i<=n; i++){
            if(!aux[i]){
                a=1;
                break;
            } 
        }
        if(a==1) cout<<"N"<<endl;
        else cout<<"Y"<<endl;

    }
    return 0;
}
//https://www.beecrowd.com.br/judge/en/problems/view/1136