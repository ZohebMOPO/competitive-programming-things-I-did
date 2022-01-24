#include<bits/stdc++.h>

using namespace std;

int main(){
    int question;
    cin >> question;
    int n;
    cin >> n;

    vector<int> dmojistan(n);
    vector<int> pegland(n);

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        dmojistan[i] = num;
    }

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        pegland[i] = num;
    }

    sort(dmojistan.begin(), dmojistan.end());
    sort(pegland.begin(), pegland.end());

    if(question == 2){
        reverse(dmojistan.begin(), dmojistan.end());
    }

    int speed = 0;
    for(int i = 0; i < n; ++i){
        speed += max(dmojistan[i], pegland[i]);
    }

    cout << speed;
    
    return 0;
}