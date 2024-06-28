#include <bits/stdc++.h>
#include <string>
#include <cmath>
using namespace std;
int main(){

    vector<string> membros = {"Rolien", "Naej", "Elehcim", "Odranoel"};

    int n, a, num;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a;
        for(int j = 0; j< a; j++){
            cin >> num;
            cout << membros[num-1] << endl;
        }
    }


}