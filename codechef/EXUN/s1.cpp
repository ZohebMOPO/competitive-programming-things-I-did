#include<bits/stdc++.h>

using namespace std;

int accept(int n){
    int ar[n][2];
    for(int i = 0; i < n; i++){
    for(int j = 0; j < 2; j++){
        cin>> ar[i][j];
    }
}
return ar[n][2];
}

void compare(int n){
    int sum[n];
    int temp = sum[0];
    for(int i = 0; i < n; i++){
        if(temp < sum[i]){
            temp = sum[i];
        }
    }
    cout << temp;
}
int main(){
    int n;
    int ar[n][2];
    accept(n);
    cin >> n;
    int sum[n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            sum[i] += ar[i][j];
            compare(sum[i]);
        }
        accept(n);
    }
    return 0;
}