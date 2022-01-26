#include<bits/stdc++.h>

using namespace std;

int main(){
    int g;
    int p;
    cin >> g;
    cin >> p;
    int arr[p];

    for(int i = 0; i < p; i++){
        cin >> arr[p];
    }

    for(int i = 0; i < p; i++){
        for(int j = i + 1; j < p;){
            if(arr[i] == arr[j]){
                for(int k = j; k < p - 1; k++){
                    arr[k] = arr[k + 1];
                    --p;
                }
            }else {
                ++j;
            }
        }
    }

    int res = p - 1;

    cout << res << endl;

    return 0;
}