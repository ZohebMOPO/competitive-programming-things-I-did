#include<bits/stdc++.h>

using namespace std;

int main(){
    string n, h;
    int sumn; int sumh; int count;
    cin>> n;
    cin>> h;
    for(int i = 0; i < n.length();i++){
        sumn += n[i];
    }
    for(int i = 0; i < h.length(); i++){
        for(int j = i; j < n.length() + i; j++){
            sumh += h[j];                
        }
        if(sumn == sumh){
            count = count + 1;
        }
        sumh = 0;
    }

    cout << count << endl;
    
    return 0;
}