#include<bits/stdc++.h>

using namespace std;

int main(){
    double n, soma = 0, multiplicacao=0;
    char operacao;
    cin >> operacao;

    for(int i = 0; i < 12; i ++){
        for(int j = 0; j < 12; j++){

            cin >> n;
            if(i < j){
                 soma += n;
            }
        }
    }

    if(operacao == 'S'){
        cout << soma << "\n";
    } else {
        cout << fixed << setprecision(1) << soma/(double)66 << "\n";
    }
        


}