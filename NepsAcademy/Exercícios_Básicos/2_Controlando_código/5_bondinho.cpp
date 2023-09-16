#include <iostream>
using namespace std;

int main(){
    int a,m;
    //a = alunos     m = monitores

    cin>>a>>m;

    if(a+m <=50){
        cout<<"S\n";
    }else{
        cout<<"N\n";
    }

    return 0;
}