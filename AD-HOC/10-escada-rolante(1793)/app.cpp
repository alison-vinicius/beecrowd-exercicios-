#include <bits/stdc++.h>
#include <string>
#include <cmath>
using namespace std;
int main(){

    while(true){
        int n, num, ant = 0, tempo = 10;

        cin >> n;
        if(n == 0) break;

        cin >> num;
        ant = num;
        for(int i =0; i < n-1; i++){
            cin >> num;

            if(num > ant + 9)
                tempo += 10;
            else 
                tempo += num - ant;
            ant = num;
        }
        cout << tempo << endl;

    }
}