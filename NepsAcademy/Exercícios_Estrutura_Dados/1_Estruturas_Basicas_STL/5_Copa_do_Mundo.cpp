#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;


int main()
{
    queue<char>times;
    vector<char> v{'A', 'B', 'C','D','E','F','G','H','I','J','K','L','M','N','O','P'};
    int resultados[15][2];

    for(int i=0; i<16; i++){
        times.push(v[i]);
    }
    
    for(int i=0;i<15;i++){
        cin>>resultados[i][0]>>resultados[i][1];
    }
    
    int i=0;
    char ganhador;
    while(times.empty()==false){
        if(resultados[i][0]>resultados[i][1]){
        times.push(times.front());
        times.pop();
        times.pop();
        }
        else{
        times.pop();
        times.push(times.front());
        times.pop();
        }
        if(times.empty()==false){
            ganhador=times.front();
        }
        
        i++;
    }
    cout<<ganhador<<"\n";
        
    return 0;
}


