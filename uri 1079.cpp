#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    double a, b, c, media=0;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a >> b >> c;

        media=(a*2+b*3+c*5)/10;

        printf("%.1lf\n", media);
    }

    return 0;
}
