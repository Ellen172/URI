#include<bits/stdc++.h>
using namespace std;

int main() {
    int vet[100], maior=0, posicao=0;

    for (int i=0; i<100; i++){
        cin >> vet[i];

        if(vet[i]>maior){
            maior = vet[i];
            posicao = i+1;
        }
    }

    cout << maior << endl;
    cout << posicao << endl;

    return 0;
}
