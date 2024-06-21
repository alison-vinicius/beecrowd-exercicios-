#include <bits/stdc++.h>
#include <string>
#include <cmath>
using namespace std;
int main(){
    int n, a, b;
    while (true){
        int a1 = 0, b1 = 0;
        cin >> n;
        if(n == 0) break;
        for(int i=0; i<n; i++){
            cin >> a >> b;
            if(a>b) a1+= 1;
            else if(b>a) b1+=1;
        }
        cout << a1 << " " << b1 << endl;
    }
}