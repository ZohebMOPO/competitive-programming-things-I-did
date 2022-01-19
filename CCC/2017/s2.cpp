#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int b = 1; int c = 0;
    int ar[n];
    int ar1[n];
    int ar2[n];
    for(int i = 0; i < n; i++){
        cin >> ar[i];
    }
    ar1[0] = ar[0];
    for(int i = 0; i < n; i++){
        if(ar[i] < ar[0]){
            ar1[b] = ar[i];
            b = b + 1;
        } else {
            ar2[c] = ar[i];
            c = c + 1;
        }
    }

    b = sizeof(ar1) / sizeof(ar1[0]);
    c = sizeof(ar2) / sizeof(ar2[0]);

    sort(ar1, ar1 + b, greater<int>());
    sort(ar2, ar2 + c);

    for(int i = 0; i < b; i++){
        cout << ar1[i] << " ";
    }
    return 0;
}