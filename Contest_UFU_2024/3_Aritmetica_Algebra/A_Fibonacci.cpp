#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
    ll n, aux=3, temp, ult=1, penult=0;

    cin >> n;
    while(aux<=n){

        temp = penult;
        penult = ult;
        ult = ult + temp;

        aux++;
    }

    cout << (ult+penult) << endl;

    return 0;
}