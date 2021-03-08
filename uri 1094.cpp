#include<bits/stdc++.h>
using namespace std;

int main () {
    int n, qtd;
    int c=0, r=0, s=0, total=0;
    double tc, tr, ts;
    char tipo;
    cin >> n;

    for (int i=0; i<n; i++){
        cin >> qtd >> tipo;

        total+=qtd;

        if(tipo == 'R'){
            r+=qtd;
        }
        else if(tipo == 'S'){
            s+=qtd;
        }
        else {
            c+=qtd;
        }

    }

    tc=(c*100);
    tr=(r*100);
    ts=(s*100);

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;
    printf("Percentual de coelhos: %.2lf %\n", tc/total);
    printf("Percentual de ratos: %.2lf %\n", tr/total);
    printf("Percentual de sapos: %.2lf %\n", ts/total);

    return 0;
}
