#include<bits/stdc++.h>
using namespace std;

int main(){
    string str, cop1, cop2;
    cin >> str;

    for(int i=0; i<str.size(); i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            cop1.push_back(str[i]);
            cop2.push_back(str[i]);
        }
    }

    for(int i=0; i<cop1.size(); i++){
        for(int j=i+1; j<cop1.size(); j++){
            swap(cop1[i],cop1[j]);
        }
    }

    if(cop1==cop2){
        cout << "S" << endl;
    }
    else {
        cout << "N" << endl;
    }

    return  0;
}
