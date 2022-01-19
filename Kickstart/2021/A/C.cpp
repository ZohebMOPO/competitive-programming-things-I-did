#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int r, c;
        cin >> r >> c;
        int arr[r][c];
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                cin >> arr[i][j];
            }
        }
        int count = 0;
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                int diff = abs(arr[i][j] - arr[i][j - 1]);
                int diff2 = abs(arr[i-1][j] - arr[i][j]);
                int diff3 = abs(arr[i+1][j] - arr[i][j]);
                int diff4 = abs(arr[j][i+1] - arr[i][j]);
                if(diff == 1 && diff2 == 1 && diff3 == 1 && diff4 == 1){
                    cout << 0;
                } else {
                    if(diff == 1 && diff2 != 1 && diff3 != 1 && diff4 != 1){
                        int some = arr[i][j] - 1;
                        count += some;
                    }
                    if(diff != 1 && diff2 == 1 && diff3 != 1 && diff4 != 1){
                        int some = arr[i][j] - 1;
                        count += some;
                    }
                    if(diff != 1 && diff2 != 1 && diff3 == 1 && diff4 != 1){
                        int some = arr[i][j] - 1;
                        count += some;
                    }
                    if(diff != 1 && diff2 != 1 && diff3 != 1 && diff4 == 1){
                        int some = arr[i][j] - 1;
                        count += some;
                    }
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}