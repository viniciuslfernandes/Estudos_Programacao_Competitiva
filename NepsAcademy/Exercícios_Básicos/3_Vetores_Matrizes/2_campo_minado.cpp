#include <iostream>
using namespace std;

int main(){

    int n, cont=0;
    cin>>n;
    int v[n];

    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n; i++){
        if(v[i]==1 && i-1>=0 && i<n-1){
            if(v[i]==1){
                cont++;
            }
            if(v[i-1]==1){
                cont++;
            }
            if(v[i+1]==1){
                cont++;
            }
            cout<<cont<<"\n";
            cont=0;
        }
        else if(v[i]==0 && i-1>=0 && i<n-1){
            if(v[i-1]==1){
                cont++;
            }
            if(v[i+1]==1){
                cont++;
            }
            cout<<cont<<"\n";
            cont=0;
        }
        else if(i==0){
            if(v[i]==1){
                cont++;
            }
            if(v[i+1]==1){
                cont++;
            }
            cout<<cont<<"\n";
            cont=0;
        }
        else if(i==n-1){
            if(v[i]==1){
                cont++;
            }
            if(v[i-1]==1){
                cont++;
            }
            cout<<cont<<"\n";
            cont=0;
        }
    }
    
    return 0;
}