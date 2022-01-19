#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t>0){
    int n; int k;
    string test;
    cin >> n;
    cin >> k;
    cin >> test;
    char arr[n];
    for(int i = 0; i < n; i++){
        arr[i] = test.at(i);
    }
    int c = 0;
    for(int i = 1; i <= n/2; i++){
        if(arr[i] != arr[n-i+1]){
            c++;
        }
    }

    if(c == k || c > k){
        cout << 0 << endl;
    } else {
        int a = 0;
        for(int i = 0; i <= i/2; i++){
            if(arr[i] != arr[n-i+1]){
                a++;
            }
        }
        int res = k - a;
        cout << res;
    }
    t--;
    }
    return 0;
}