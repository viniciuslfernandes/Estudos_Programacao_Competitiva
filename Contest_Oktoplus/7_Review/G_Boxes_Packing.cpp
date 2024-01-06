#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n; cin>>n;
    vector<int> vet(n);

    for(int i=0; i<n; i++){
        cin>>vet[i];
    }

    sort(vet.rbegin(), vet.rend());
    int sum=1;
    for(int i=1, j=0; i<n; ){
        if(vet[j]>vet[i]){
            j++; i++;
        }
        else if(vet[j]==vet[i]){
            sum++;
            i++;
        }
    }
    cout<<sum<<endl;
    return 0;
}