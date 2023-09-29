#include <bits/stdc++.h>
using namespace std;

int main()
{
    // n= n de faixas       m=numero de ogros
    int n, m;
    vector<int> faixa;
    vector<int> premiacao;
    cin >> n >> m;

    int x;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> x;
        faixa.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        premiacao.push_back(x);
    }

    for (int i = 0; i < m; i++)
    {
        if (i < m - 1)
        {
            cin >> x;
            if (x < faixa[0])
                cout << premiacao[0] << " ";
            else if (x > faixa[n - 2])
                cout << premiacao[n - 1] << " ";
            else
            {
                int pos = upper_bound(faixa.begin(), faixa.end(), x) - faixa.begin();
                cout << premiacao[pos] << " ";
            }
        }
        else
        {
            cin >> x;
            if (x < faixa[0])
                cout << premiacao[0] << endl;
            else if (x > faixa[n - 2])
                cout << premiacao[n - 1] << endl;
            else
            {
                int pos = upper_bound(faixa.begin(), faixa.end(), x) - faixa.begin();
                cout << premiacao[pos] << endl;
            }
        }
    }

    return 0;
}
