#include <bits/stdc++.h>

using namespace std;


int main()
{
    int cont=0;
    string n;cin>>n;

    for(int i=n.size()-1, j=0; i>=0; i--,j++){
        if(n[i]==1){
            cont=cont+n[i]*pow(2,j);
        }
        else{
            cont=cont+n[i]*pow(0,j);
        }
    }
    cout<<cont<<"\n";
    return 0;
}



