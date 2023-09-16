#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<char> letras = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    vector<int> num = {8,7,6,5,4,3,2,1};
    char mat[8][8];
    int a, b;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> mat[i][j];
            if (mat[i][j] == '*') {
                a = i;
                b = j;
            }
        }
    }

    cout << letras[b] <<  num[a]<< endl;
    return 0;
}