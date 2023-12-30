#include <bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;
    string str;
    cin>>str;
    set <char> aux;
    for(int i=0; i<n; i++){
        aux.insert(str[i]);
    }
    int min=n;
    for(int i=0; i<n; i++){
        set<char> comparador;
        int sum=0;
        for(int j=i; j<n; j++){
            comparador.insert(str[j]);
            sum++;
            if(comparador==aux){
                if(sum<min){
                    min=sum;
                }
                break;
            }
        }
    }
    cout<<min<<endl;
    return 0;
}
/*

aaBCCe
aBCe

set = 
sum = 4
*/