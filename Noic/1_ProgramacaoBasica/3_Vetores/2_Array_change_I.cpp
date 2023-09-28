#include <bits/stdc++.h>
using namespace std;
int main(){

    vector <int> vet;
    int x;
    for(int i=0; i<20; i++){
        cin >>x;
        vet.push_back(x);
    }
    for(int i=19; i>=0; i--){
        cout<<"N["<<19-i<<"] = "<<vet[i]<<endl;
    }
    return 0;
}