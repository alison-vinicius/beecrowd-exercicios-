#include <bits/stdc++.h>


using namespace std;

void feliz(){
    cout << ":)\n"; 
}
void triste(){
    cout << ":(\n"; 
}



int main(){

    int a, b, c;

    cin >> a >> b >> c;

    if(a > b && b <= c){
        feliz();
    } else if(a < b && b >= c){
        triste();
    }
 


}