#include <bits/stdc++.h>
using namespace std;

int main(){

    int p,s;cin>>p>>s;//p=comprimento da praia em m     e      s=num de sorveteiros

    vector<pair<int, int>> intervalo;
    vector<pair<int, int>> int_serv;
    
    
    int u,v, aux, aux2;
    for(int i=0; i<s; i++){
        cin>>u>>v;
        intervalo.push_back(make_pair(u,v));
    }
    sort(intervalo.begin(), intervalo.end());

    
    aux=intervalo[0].first;
    aux2=intervalo[0].second;

    cout<<"\n";

    for(int i=1,j=0; i<s; i++){
        if(aux2<intervalo[i].first || aux>intervalo[i].second){
            int_serv.push_back(make_pair(aux,aux2));
        }
        if(intervalo[i].first>=aux && intervalo[i].first<=aux2){
            if(intervalo[i].second>aux2){
                aux2=intervalo[i].second;
                j++;
            }
        }
        if(intervalo[i].second>=aux && intervalo[i].second<=aux2){
            if(intervalo[i].first<aux){
                aux=intervalo[i].first;
                j++;
            }
        }
        if(j!=0){
            int_serv.push_back(make_pair(aux,aux2));
            j=0;
        }
        else if(intervalo[i].second<aux || intervalo[i].first>aux2){
            int_serv.push_back(make_pair(intervalo[i].first, intervalo[i].second));
        }
        
    }

    for(int i=0; i<int_serv.size(); i++){
        
        cout<<int_serv[i].first<<" "<<int_serv[i].second<<" \n";
    }

    return 0;
}