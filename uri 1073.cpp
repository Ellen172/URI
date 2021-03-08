#include<bits/stdc++.h>

int main() {

    int n;
    scanf("%d", &n);

    if(n%2!=0){
        n++;
    }

    for(int i=2; i<=n; i+=2){
        printf("%d^2 = %d\n", i, i*i);
    }

    return 0;
}
