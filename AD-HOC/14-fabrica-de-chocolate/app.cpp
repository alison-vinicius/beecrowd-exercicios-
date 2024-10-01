#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int a, b, c;
    while(true){
        cin >> a >> b >> c; 
        if(a+b+c == 0)
            break;
        
        double volume = cbrt(a*b*c);
        
        cout << static_cast<int>(trunc(volume)) << "\n";



    }

}