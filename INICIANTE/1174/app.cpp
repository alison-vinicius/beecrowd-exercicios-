#include <bits/stdc++.h>
#include <iomanip>

using namespace std;


int main(){

    vector<double>a (100);

    for(int i = 0; i < 5; i++) cin >> a[i];

    for(int i = 0; i < 5; i++){
        if(a[i]<=10){
            cout << "A[" << i << "] = " << fixed << setprecision(1) << a[i] << "\n";
        }
    }

}