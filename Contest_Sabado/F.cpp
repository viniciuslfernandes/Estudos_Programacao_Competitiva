#include <bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;
    int x;
    vector<pair<int, string>> elementos;
    string a, b;
    for(int i=0; i<n; i++) {
        cin>>a>>b;
        if(a[0]=='0' or a[0]=='1' or a[0]=='2' or a[0]=='3' or a[0]=='4' or a[0]=='5' or a[0]=='6' or a[0]=='7' or a[0]=='8' or a[0]=='9'){
            x= stoi(a);
            x/=2;
            a=b;
        }else {
            x=stoi(b);
        }
        elementos.push_back(make_pair(x, a));
    }
    sort(elementos.begin(), elementos.end());

    for(int i=0; i<n; i++){
        cout<<elementos[i].second<<endl;
    }

    return 0;
}
/*PASSOU NO CONTEST*/