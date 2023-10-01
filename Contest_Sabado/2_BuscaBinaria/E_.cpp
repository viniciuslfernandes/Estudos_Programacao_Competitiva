#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main()
{

    int n;
    cin >> n;
    ull x;
    vector<ull> vet;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        vet.push_back(x);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> x;
        ull pos_inf = lower_bound(vet.begin(), vet.end(), x) - vet.begin();
        ull pos_sup = upper_bound(vet.begin(), vet.end(), x) - vet.begin();

        if(pos_inf==0){
            cout<<"X ";
        }else{
            while(pos_inf>=0 && vet[pos_inf-1]==x){
                pos_inf--;
            }
            if(pos_inf>=0) cout<<vet[pos_inf-1]<<" ";
            else cout<<"X ";
        }

        if(pos_sup==vet.size()){
            cout<<"X"<<endl;
        }else{
            cout<<vet[pos_sup]<<endl;
        }
    }    
    return 0;
}

// FEITO DEPOIS DO CONTEST