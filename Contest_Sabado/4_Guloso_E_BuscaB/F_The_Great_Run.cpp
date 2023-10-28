#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;cin>>t;
    while(t--){
        int n, k; cin>>n>>k;
        int som=0;
        vector<int> vet(n);
        vector<int> resp(n);
        for(int i=0; i<n; i++){
            cin>>vet[i];
            resp[i]=0;
        }
        for(int i=0; i<n; i++){
            for(int j=i; j<k+i && j+k<=n; j++ ){
                som+=vet[j];
            }
            resp[i]=som;
            som=0;
        }
        sort(resp.rbegin(), resp.rend());
        cout<<resp[0]<<endl;
    }
    return 0;
}


 