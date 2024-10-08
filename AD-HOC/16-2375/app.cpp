#include <bits/stdc++.h>


using namespace std;

int main(){
    int diametro, a, b , c; 

    cin >> diametro;
    cin >> a >> b >> c;

    double esfera = (3.14 * pow(diametro*2 , 3)) * (4/(double)3);
    int caixa = a*b*c;

    (esfera <= caixa)? cout << "S\n": cout << "N\n";
}