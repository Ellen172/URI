#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int voto[n];

    for (int i=0; i<n; i++){
        scanf("%d", &voto[i]);
    }

    for (int i=0; i<n; i++){
        if(voto[0]<voto[i]){
            printf("N\n");
            return 0;
        }
    }

    printf("S\n");

    return 0;
}
