#include <bits/stdc++.h>
using namespace std;
int main(){

    double a, b, c, d, soma, exame;
    cin>>a>>b>>c>>d;
    soma=((a*2)+(b*3)+(c*4)+(d))/10;
    cout.precision(1);
    cout.setf(ios::fixed);

    if(soma>=7) cout<<"Media: "<<soma<<endl<<"Aluno aprovado."<<endl;
    else if(soma<5) cout<<"Media: "<<soma<<endl<<"Aluno reprovado."<<endl;
    else{
        cout<<"Media: "<<soma<<endl<<"Aluno em exame."<<endl;
        cin>>exame;
        if((exame+soma)/2>=5) 
            cout<<"Nota do exame: "<<exame<<endl<<"Aluno aprovado."<<endl<<"Media final: "<<(exame+soma)/2<<endl;
        else 
            cout<<"Nota do exame: "<<exame<<endl<<"Aluno reprovado."<<endl<<"Media final: "<<(exame+soma)/2<<endl;

    }
    return 0;
}