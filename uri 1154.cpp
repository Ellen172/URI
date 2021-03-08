#include<bits/stdc++.h>

int main() {
    int n;
    double soma=0, qtd=0;

    while (1){
        scanf("%d", &n);
        if(n<0){
            break;
        }
        else {
            soma+=n;
            qtd++;
        }
    }

    printf("%.2lf\n", soma/qtd);

    return 0;
}
