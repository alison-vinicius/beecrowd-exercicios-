#include <bits/stdc++.h>
using namespace std;

int main(){
    int q, d, p, numerador, denominador;

    int dias;

    while(true){
        cin >> q;
        if(q == 0) break;

        cin >> d >> p;

        numerador = (p*d)*-1;
        denominador = q - p;

        dias = numerador / denominador; 
        

        if(numerador % denominador != 0)
            cout << abs(dias * q)+1 << " paginas\n";
        else
            cout << abs(dias * q) << " paginas\n";
    }

}
