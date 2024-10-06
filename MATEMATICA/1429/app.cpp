#include <bits/stdc++.h>

using namespace std;
int main(){
    string numero;
    vector<int> vetor = {120, 24, 6, 2, 1};
    while(true){
        cin >> numero;

    
        int soma = 0;
        if(numero == "0") break;
    
        int j = 4;

        for(int i = numero.size()-1; i >=0; i--){
            soma += vetor[j] * (numero[i]-'0');
            j--;
            
        }

        cout << soma << "\n";


    }
}