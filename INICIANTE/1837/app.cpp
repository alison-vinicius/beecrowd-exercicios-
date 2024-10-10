#include <bits/stdc++.h>


using namespace std;


int main(){
    int a ,b, q;

    cin >> a >> b;

   for(int r = 0; r <= abs(b); r++){
        q = ((a-r)/b);
        if(a == (b*q)+r) {
            cout << q << " " << r << "\n";
            break;
        }
   }


}