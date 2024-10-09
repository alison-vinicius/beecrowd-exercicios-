#include <bits/stdc++.h>


using namespace std;

void tentativa(string jogador, string expressao, char operacao){ 
        
        string n1 = expressao.substr(0, expressao.find(" "));
        string n2 = expressao.substr(expressao.find(" ")+1, expressao.find("=")-expressao.find(" ")+1);
        string n3 = expressao.substr(expressao.find("=")+1, expressao.size());


        cout << jogador << expressao << operacao << "\n";



        cout << n1 << n2 << n3 << "\n";
        
}

int main(){


    int n;
    string nome, jogador;
    while(cin >> n){
        cin.ignore();
        vector<string> expressoes(n);

        for(int i = 0; i < n; i++){
            cin.ignore();
            getline(cin, expressoes[i]);
        }

        


        for(int i = 0; i < n; i++){
            cin.ignore();
            getline(cin, jogador);     

            tentativa(jogador, expressoes[expressoes.size()-3], expressoes.size()-1);
        }           



       

       }
}