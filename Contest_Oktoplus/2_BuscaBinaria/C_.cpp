#include <bits/stdc++.h>
using namespace std;

int maximo_tri(long long x) {
    int altura = 0;
    long long total = 0;
    
    while (total + (altura + 1) <= x) {
        altura++;
        total += altura;
    }
    
    return altura;
}

int main() {
    int t;
    cin >> t;
    
    for(int i=0; i<t; i++){
        long long x;
        cin >> x;
        
        int altura = maximo_tri(x);
        cout << altura << endl;
    }
    
    return 0;
}
//FEITO NO CONTEST
