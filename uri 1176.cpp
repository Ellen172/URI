#include<bits/stdc++.h>
using namespace std;

int main() {
    int x, n;
    long long int fib[100], ans;

    cin >> x;

    for(int j=0; j<x; j++){

        cin >> n;
        for(int i=0; i<=n; i++){
            if(i==0){
                fib[i]=0;
            }
            else if(i==1){
                fib[i]=1;
            }
            else {
                fib[i]=fib[i-2]+fib[i-1];
            }
            ans=fib[i];
        }


        printf("Fib(%d) = %lld\n", n, ans);
    }

    return 0;
}
