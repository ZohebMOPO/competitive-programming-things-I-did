#include<bits/stdc++.h>

using namespace std;

int main(){
    int j, a;
    cin >> j;
    cin >> a;
    string jersey[j];
    string jerseyathelete[a][2];
    for(int i = 0; i < j; i++){
        cin >> jersey[i];
    }
    for(int i = 0; i < a; i++){
        for(int j = 0; j < 2; j++){
            cin >> jerseyathelete[i][j];
        }
    }
    int count  = 0;
    for(int i = 0; i < a; i++){
        int j = stoi(jerseyathelete[i][1]);
        if(jersey[j] == jerseyathelete[i][0]){
            count++;
        }
    }
    
    cout << count << endl;

    return 0;
}