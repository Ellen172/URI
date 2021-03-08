#include<bits/stdc++.h>
using namespace std;

int main() {
    int c;
    string r, s;
    cin >> c;
    for(int i=0; i<c; i++){
        cin >> r >> s;

        if(r==s){
            cout << "empate" << endl;
        }
        else {
            if((r=="tesoura" && (s=="papel" || s=="lagarto")) || (r=="papel" && (s=="pedra" || s=="spock")) || ( r=="pedra" && (s=="lagarto" || s=="tesoura")) || (r=="lagarto" && (s=="spock" || s=="papel")) || (r=="spock" && (s=="tesoura" || s=="pedra"))){
                cout << "rajesh" << endl;
            }
            else {
                cout << "sheldon" << endl;
            }
        }
    }

    return 0;
}
