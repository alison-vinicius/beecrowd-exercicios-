#include <bits/stdc++.h>
#include <string>
#include <cmath>
using namespace std;


int main(){


    int n;
    string letra = "ABCDE";

    while (true){
        

        cin >> n;

        if(n == 0) break;
        for(int j = 0; j < n; j++){
            vector<int> questao(5);
            int cont = 0, save;
            
            for(int i=0; i<5; i++){
                cin >> questao[i];
                if(questao[i] <= 127){
                    save = i;
                    cont += 1;
                }
            }

            (cont > 1 || cont == 0)? cout << "*" << endl: cout << letra[save] << endl;
    

           
        }


    }

    
}