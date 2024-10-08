#include <bits/stdc++.h>
#include <locale>
#include <codecvt>

using namespace std;
int main(){
    
    int primos[25] ={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

    int n, primo;
    while (cin >> n){

        primo = 1;

        int salto, soma = 0;

        vector<int>vetor(n);

        for(int i = 0; i < n;i++){
            cin >> vetor[i];
        }

        cin >> salto;

        for(int i = vetor.size()-1;i >= 0; i-=salto){
            soma += vetor[i];
        }

       

       if(soma == 1){
        primo = 0;
       }
        if(soma == 2){
            primo = 1;
        } else if(soma % 2 == 0){
            primo = 0;
       } else{
        int i = 0;
    
        while(primos[i] <= sqrt(soma)){

            if(soma % primos[i] == 0){
                primo = 0;
            }
            i++;

        }
       
       }

        
    
       if(primo == 1){
        cout << "You’re a coastal aircraft, Robbie, a large silver aircraft.\n";
       } else{
        cout << "Bad boy! I’ll hit you.\n";
       }




    }
}
