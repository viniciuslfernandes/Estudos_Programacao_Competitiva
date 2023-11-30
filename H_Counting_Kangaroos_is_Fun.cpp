#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vet(n);
    vector <bool> aux(n);
    for (int i = 0; i < n; i++) {
        cin >> vet[i];
        aux[i]=true;
    }

    sort(vet.rbegin(), vet.rend());
    int sum = 1;
    for (int i = 1, j = 0; i < n;) {
        if(aux[j]==false) j++;
        else if ((vet[j] >= vet[i] * 2)) {
            aux[i]=false;
            aux[j]=false;
            j++;
            i++;
        } else {
            sum++;
            i++;
        }
    }

    cout << sum << endl;
    return 0;
}
/*



974 484
972 474
957 454
952 449
948 441
938 438
930 433
923 409
916 405
911 384
911 364
896 347
886 341
845 336
842 330
841 314
836 303
819 288
814 288
807 282
804 276
783 271
778 271
778 249
775 245
754 242
735 240
702 237
682 222
666 205
655 204
647 201
638 154
636 150
618 146
604 145
601 142
601 141
590 139
589 134
579 132
576 130
570 125
549 110
535 109
520 97
94 45
83 40
82
60
54
48


*/