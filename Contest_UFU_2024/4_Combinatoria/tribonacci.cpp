#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
    ll n, aux=4, temp, ult=1, penult=0, antipenul = 0;

    cin >> n;
    while(aux<=n){

        temp = antipenul;
        antipenul = penult;
        penult = ult;
        ult = ult + temp + antipenul;

        aux++;
    }

    cout << (ult+penult+antipenul) << endl;

    return 0;
}