#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){

    int n; cin>>n;
    ull x;
    vector<ull> vet;

    for(int i=0; i<n; i++){
        cin>>x;
        vet.push_back(x);
    }

    int q; cin>>q;
    for(int i=0; i<q; i++){
        cin>>x;
        ull pos= upper_bound(vet.begin(), vet.end(), x)-vet.begin();
        if(pos==vet.size()){
            while(pos>=0 && vet[pos-1]==x){
                pos--;
            }
            if(pos>=0){
                cout<<vet[pos-1]<<" X"<<endl;
            }
        }
        else if(pos==0){
            while(pos<vet.size() && vet[pos]==x){
                pos++;
            }
            if(pos<vet.size()){
                cout<<"X "<<vet[pos]<<endl;
            }
        }
        else{
            int a=pos;
            while(pos>=0 && vet[pos-1]==x){
                pos--;
            }
            if(pos>=0){
                cout<<vet[pos-1]<<" "<<vet[a]<<endl;
            }else{
                cout<<"X "<<vet[a]<<endl;
            }
        }
           
    }
    return 0;
}