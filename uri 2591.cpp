#include<bits/stdc++.h>
using namespace std;

int main() {
    int c;
    string str;
    cin >> c;
    for (int i=0; i<c; i++){
        cin >> str;
        int h=0, k=0;

        for(int j=0; j<str.size(); j++){
            for(int m=j+1; m<str.size(); m++){
                if(str[j]=='h'){
                    if(str[m]=='a'){
                        h++;
                    }
                    else{
                        break;
                    }
                }
                else if(str[j]=='k'){
                    if(str[m]=='a'){
                        k++;
                    }
                }

            }
        }

        cout << "k";
        for(int j=0; j<(h*k); j++){
            cout << "a";
        }
        cout << endl;

    }

    return 0;
}
