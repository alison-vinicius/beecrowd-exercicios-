#include <bits/stdc++.h>


using namespace std;
int main(){
    int n, lata, copo, quebrou = 0;

    cin >> n;

    for(int i = 0; i < n; i ++){
        cin >> lata >> copo;
        if(lata>copo){
            quebrou += copo;
        }
    }

    cout << quebrou << "\n";
}