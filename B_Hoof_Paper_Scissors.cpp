#include <bits/stdc++.h>
using namespace std;
int main(){

    
    int n; cin>>n;
    vector <char> vet(n);
    int p=0, h=0, s=0;
    for(int i=0; i<n; i++){
        cin>>vet[i];
        if(vet[i]=='P') p++;
        if(vet[i]=='H') h++;
        if(vet[i]=='S') s++;
    }
    if(p>=h && p>=s){
        int sum=p;
        int auxh=0, auxs=0;
        for(int i=0; i<n; i++){
            if(vet[i]=='P'){
                p--;
            }
            else if(p==0){
                if(vet[i]=='H'){
                    auxh++;
                }else{
                    auxs++;
                }
            }
        }
        if(auxh>=auxs){
            cout<<auxh+sum<<endl;
        }else{
            cout<<auxs+sum<<endl;
        }
    }
    else if(h>=p && h>=s){
        int sum=h;
        int auxp=0, auxs=0;
        for(int i=0; i<n; i++){
            if(vet[i]=='H'){
                h--;
            }
            else if(h==0){
                if(vet[i]=='P'){
                    auxp++;
                }else{
                    auxs++;
                }
            }
        }
        if(auxp>=auxs){
            cout<<auxp+sum<<endl;
        }else{
            cout<<auxs+sum<<endl;
        }

    }
    else if(s>=p && s>=h){
        int sum=s;
        int auxh=0, auxp=0;
        for(int i=0; i<n; i++){
            if(vet[i]=='S'){
                s--;
            }
            else if(s==0){
                if(vet[i]=='H'){
                    auxh++;
                }else{
                    auxp++;
                }
            }
        }
        if(auxh>=auxp){
            cout<<auxh+sum<<endl;
        }else{
            cout<<auxp+sum<<endl;
        }
    }
    return 0;
}