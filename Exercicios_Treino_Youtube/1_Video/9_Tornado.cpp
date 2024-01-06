#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    while(cin>>n){
        if(n==0) break;
        vector<int> vet(n+1, 0);
        int primeiro=-1;
        for(int i=0; i<n; i++){
            cin>>vet[i];
            if(vet[i]==1 && primeiro==-1){
                primeiro=i;
            }
        }
        vet[n]=vet[0];
        int sum=0;
        for(int i=0; i<=n; i++){
            int j= (i+primeiro)%n;
            if(vet[j]==0 && vet[j+1]==0){
                sum++; i++;
            }
        }

        cout<<sum<<endl;
    }

    return 0;
}
//https://www.beecrowd.com.br/judge/en/problems/view/1266