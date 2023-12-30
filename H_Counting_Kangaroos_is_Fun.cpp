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
    
    for (int i = 0; i <n; i++) {
        for(int j=i+1; j<n; j++){
            if(aux[i]==true and aux[j]==true and vet[i]>=2*vet[j]){
                aux[j]=false;
                break;
            }
        }
    }
    int sum=0;
    for(int i=0; i<n; i++){
        if(aux[i]==false){
            sum++;
        }
    }
    cout<<n-sum<<endl;
    
    return 0;
}

/*

974
972
957
952
948
938
930
923
916
911
911
896
886
845
842
841
836
819
814
807
804
783
778
775
754
735
702
682
666
655
647
638
636
618
604
601
601
590
589
579
576
570
549
535
520

*/