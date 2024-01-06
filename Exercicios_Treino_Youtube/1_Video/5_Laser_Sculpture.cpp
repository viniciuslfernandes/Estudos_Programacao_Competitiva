#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, c;
    while(cin>>a>>c){
        if(a==0 && c==0) break;
        vector<int> vet(c);
        int sum=0;
        for(int i=0; i<c; i++){
            cin>>vet[i];
            if(i>0){
                if(vet[i-1]>vet[i]){
                    sum+=vet[i-1]-vet[i];
                }
            }else{
                sum+=a-vet[i];
            }
        }
        cout<<sum<<endl;
        
    }
    
    return 0;
}
//https://www.beecrowd.com.br/judge/en/problems/view/1107