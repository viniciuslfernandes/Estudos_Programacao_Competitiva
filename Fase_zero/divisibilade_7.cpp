#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    string x = "", num = "", ultimo;
    cin >> x;
    ll resp;
    cout << stoll(x) << endl;
    while (true) {
        if (x.size() > 1) {
            ultimo = x[x.size() - 1];
            x.erase(x.size() - 1);
            num = x;
        } else {
            break; 
        }
        resp = stoll(num) * 3 + stoll(ultimo);
        cout << resp << endl;
        if (resp == 0 || resp == 7) {
            break; 
        }
        x = to_string(resp);
        num = "";
        resp = 1;
    }

    return 0;
}
