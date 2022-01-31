#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int t;
    cin >> t;

    vector<vector<int>> glass(n);
    for(int i = 0; i < glass.size(); i++){
        for(int j = 0; j < glass[i].size(); j++){
            int num;
            cin >> num;
            glass[i][j] = num;
        }
    }
    return 0;
}