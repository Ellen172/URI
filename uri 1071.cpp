#include<bits/stdc++.h>

int main(){
    int x, y, cont=0;

    scanf("%d %d", &x, &y);

    if(x>y){
        cont=x; x=y; y=cont; cont=0;
    }


    for(int i=x; i<y; i++){
        if(i>0 && i%2!=0){
            cont+=i;
        }
    }

    printf("%d\n", cont);

    return 0;
}
