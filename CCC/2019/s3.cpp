#include<bits/stdc++.h>

using namespace std;

int arr[3][3];


int main(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr[i][j] == 'X' && arr[i][j+1] == 'X'){
            }
        }
    }
    return 0;
}