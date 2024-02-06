#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
    double conta;
    int idade;

    cin >> conta >> idade;

    cout << fixed << setprecision(2);

    if (idade <= 5) {
        cout <<  round(conta * 0.5 * 100) / 100 << endl; 
    } else if (idade < 18) {
        cout << round(conta * 0.95 * 100) / 100  << endl; 
    } else if (idade < 60) {
        cout << round(conta * 1.1 * 100) / 100 << endl; 
    } else {
        cout << round(conta * 0.85 * 100) / 100 << endl; 
    }

    return 0;
}