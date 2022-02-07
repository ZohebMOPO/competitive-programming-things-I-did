#include<bits/stdc++.h>

using namespace std;

int main(){
    int j;
    cin >> j;
    int store = 0;
    if( j < 4){
        store = 0;
    } else {
        if(j == 4){
            store = 1;
        } else {
            store = (j - 1) * (j - 2) * (j - 3) / 6;
        }
    }

    cout << store << endl;
    
    return 0;
}