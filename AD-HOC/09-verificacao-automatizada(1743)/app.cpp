#include <bits/stdc++.h>
#include <string>
#include <cmath>
using namespace std;
int main(){
    vector<int>p1(5);
    vector<int>p2(5);
    char l = 'Y';

    for(int i=0; i < 5; i++)
        cin >> p1[i];

    for(int i=0; i < 5; i++)
        cin >> p2[i];
    
    for(int i=0; i<5; i++)
        if(p1[i] == p2[i])
            l = 'N';

    cout << l << endl;


}