#include <bits/stdc++.h>
using namespace std;

int main(){

    vector <int> vet;
    int x;
    for(int i=0; i<10; i++){
        cin>>x;
        if(x<=0){
            vet.push_back(1);
        }else{
            vet.push_back(x);
        }
        
    }
    for(int i=0; i<10; i++){
        cout<<"X["<<i<<"] = "<<vet[i]<<endl;
    }
    return 0;
}