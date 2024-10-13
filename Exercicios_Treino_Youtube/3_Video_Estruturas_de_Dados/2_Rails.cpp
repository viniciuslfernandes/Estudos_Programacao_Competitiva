#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    while(cin>>n, n!=0){
        vector <int> vet(n, 0);
        while(cin>>vet[0], vet[0]!=0){
            for(int i=1; i<n; i++){
                cin>>vet[i];
            }
            stack<int> pilha;
            int j;
            for(int i=1, j=0; i<=n; i++){
                pilha.push(i);
                while(j<n && !pilha.empty() && pilha.top()==vet[j]){
                   pilha.pop();
                   j++;
                }
            }
            if(pilha.empty()) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        cout<<endl;
    }
    return 0;
}
//https://www.beecrowd.com.br/judge/en/problems/view/1062