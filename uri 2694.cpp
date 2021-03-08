#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, soma=0, a=0, b=0, c=0;
    string str;
    cin >> n;

    for (int i=0; i<n; i++){
        cin >> str;

        str[2]-=48;
        str[3]-=48;
        str[5]-=48;
        str[6]-=48;
        str[7]-=48;
        str[11]-=48;
        str[12]-=48;

        a=(str[2]*10)+str[3];
        b=(str[5]*100)+(str[6]*10)+str[7];
        c=(str[11]*10)+str[12];

        soma=a+b+c;

        cout << soma << endl;
    }

    return 0;
}
