#include <bits/stdc++.h>

int main() {
    int x, y, aux=0;

    scanf("%d %d", &x, &y);

    if(y<x){
        aux=x; x=y; y=aux;
    }

    for(int i=x; i<y; i++){
        if(i%5==2 || i%5==3){
            printf("%d\n", i);
        }
    }

    return 0;
}
