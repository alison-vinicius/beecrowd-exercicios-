#include <bits/stdc++.h>
#include <string>
#include <cmath>
using namespace std;
int main(){

    while(true){
        int n, ano, tempo, maior, menor = 3000 ;
        string planeta, planetaA;

        cin >> n;
        if (n == 0 ) break;

        for(int i = 0; i < n; i++){
            cin >> planeta >> ano >> tempo;
            if(ano-tempo < menor ){
                menor = ano-tempo;
                planetaA = planeta;
            }

        }

        cout << planetaA << endl;
    }
}