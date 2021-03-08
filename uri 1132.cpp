#include <bits/stdc++.h>

int main() {

    int a, b, soma=0, c=0;

    scanf("%d %d", &a, &b);

    if(b<a){
        c=a; a=b; b=c;
    }

    for (int i=a; i<=b; i++){
        if(i%13!=0){
            soma+=i;
        }
    }

    printf("%d\n", soma);

    return 0;
}
