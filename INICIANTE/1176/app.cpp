#include <bits/stdc++.h>


using namespace std;


int main(){
    int n; 
    vector<long long int> fibonacci(61);

    long long int ant = 0, prox = 1, aux;
    int d;
    
    
    fibonacci[0] = ant;
    fibonacci[1] = prox;

    for(int i = 2; i <= 60; i++){
        fibonacci[i] = ant + prox;
        aux = prox;
        prox = ant + prox;
        ant = aux;
    }

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> d;
        cout << "Fib("<< d << ") = " << fibonacci[d] << "\n";
    }
}