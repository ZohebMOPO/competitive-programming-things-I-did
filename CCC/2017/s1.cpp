#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int sum1 = 0; int sum2 = 0;
    cin >> n;
    int arr1[n];
    int arr2[n];
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    for(int i = 0; i < n; i++){
        cin >> arr2[i];
    }
    int c = 1;
    for(int i = 0; i < n; i++){
        sum1 = sum1 + arr1[i];
        sum2 = sum2 + arr2[i];
        if(sum1 == sum2){
            cout << c << endl;
        }
        if(c > n){
            cout << 0;
        }
        c++; 
    }

    return 0;
}