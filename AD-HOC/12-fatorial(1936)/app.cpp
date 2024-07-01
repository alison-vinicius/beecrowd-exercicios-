#include <bits/stdc++.h>
#include <string>
#include <cmath>
using namespace std;
int main(){

    vector<int> fatorial = {1,2,6,24,120,720,5040,40320};

    int n, soma = 0, cont = 0;
    cin >> n;

    int i = 7;

    while(i >= 0){
        if(soma <= n){
            soma += fatorial[i]; 
            cont += 1;
        }else{
            i--; 
        }
    }

    cout << cont << endl;


}