#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;cin>>n;//numero de jogadores
    int t; cin>>t;//numero de times
    string nome;
    int h;
    vector<pair<int, string>> jogadores;
    vector<pair<int, string>> time;

    for(int i=0; i<n; i++){
        cin>>nome>>h;
        jogadores.push_back(make_pair(h,nome));
    }

    sort(jogadores.begin(), jogadores.end());
    
    reverse(jogadores.begin(), jogadores.end());
    for(int i=0, j=1; i<n; i++){
        time.push_back(make_pair(j, jogadores[i].second));
        j++;
        if(j>t){
            j=1;
        }
    }

    sort(time.begin(), time.end());
    cout<<"\n";
    for(int i=1; i<=t; i++){
        cout<<"Time"<<" "<<i<<"\n";
        for(int j=0; j<n; j++){
            if(time[j].first==i){
                cout<<time[j].second<<"\n";
            }
        }
        cout<<"\n";
    }
   
   
    

    return 0;
}