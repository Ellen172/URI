#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    string str;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> str;
        cin >> d;

        for(int j=0; j<str.size(); j++){
            if(str[j]-d<65){
                str[j]=str[j]-d+26;

            }
            else {
                str[j]=str[j]-d;
            }
        }

        cout << str << endl;
    }


    //65 a 90;
    return 0;
}
