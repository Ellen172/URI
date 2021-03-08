#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        long long int dif;
        string a, b, str;
        cin >> a >> b;

        dif=a.size()-b.size();

        a.erase(0,dif);

        if(a==b){
            cout << "encaixa" << endl;
        }
        else {
            cout << "nao encaixa" << endl;
        }

    }

    return 0;
}
