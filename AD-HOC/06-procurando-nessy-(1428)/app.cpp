#include <bits/stdc++.h>
#include <string>
#include <cmath>
using namespace std;
int main(){
    int n, a, b, sonares, flag;

    cin >> n;
    for(int i =0; i< n; i++){
        cin >> a >> b;
        flag = 0;
        sonares = ((a-2)/3 ) * ((b-2)/3 );  

        if(  ( (a-2)%3) > 0){
            flag = 1;
            sonares += (b-2)/3;
            if ((b-2)%3 > 0 )
                sonares += 1;
        }   
        if(  ( (b-2)%3) > 0){
            if( flag == 1){
                sonares += (a-5)/3;
                if ((a-5) %3 > 0 )
                    sonares += 1;
            }
            else{
                sonares += (a-2) /3;
                if(((a-2)%3) >0)
                    sonares += 1; 
            }   
        }
        cout << sonares << endl;
    }
}