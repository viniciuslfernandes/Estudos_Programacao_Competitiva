#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void divisivel_2( string num);
void divisivel_3( string num);
void divisivel_5( string num);

int main()
{
    string num;cin>>num;
    divisivel_2(num);
    divisivel_3(num);
    divisivel_5(num);

    return 0;
    

}
void divisivel_2( string num){
    string aux;
    int x;
    aux=num[num.size() - 1];
    x=stoi(aux);

    if(x%2==0){
        cout<<"S"<<endl;
    }else{
        cout<<"N"<<endl;
    }

}

void divisivel_3( string num){
    ull x=0;
    string aux;
    for(int i=0; i<num.size(); i++){
        aux=num[i];
        x=x+stoi(aux);
    }
    if(x%3==0) cout<<"S"<<endl;
    else cout<<"N"<<endl;
}

void divisivel_5( string num){
    string aux;
    int x=0;
    aux=num[num.size()-1];
    x=stoi(aux);
    if(x%5==0) cout<<"S"<<endl;
    else cout<<"N"<<endl;
}