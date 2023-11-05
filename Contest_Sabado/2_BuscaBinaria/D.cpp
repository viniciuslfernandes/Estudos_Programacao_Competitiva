#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, r;
    cin >> n >> r;
    map<int, int> m;

    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        int a= r-num;
        if (m.find(a) != m.end()) {
            cout << m[a] << " " << i << endl;
            return 0;
        }
        m[num] = i;
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}