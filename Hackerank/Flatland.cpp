#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; int m;
    cin >> n;
    cin >> m;
    int cities[n];
    int spaces[m];
    int max[n];
    for(int i = 0; i < n; i++){
        cities[i] = i;
    }
    for(int i = 0; i < m; i++){
        cin >> spaces[i];
    }
    for(int i = 0; i < n; i++){
        int diff1 = abs(cities[i] - spaces[0]);
        for(int j = 0; j < m; j++){
            int tempdiff = abs(cities[i] - spaces[j]);
            if(diff1 > tempdiff){
                diff1 = tempdiff;
            }
        }
        max[i] = diff1;
    }
    int least = max[0];
    for(int i = 0; i < n; i++){
        if(least < max[i]){
            least = max[i];
        }
    }
    cout << least;
    
    return 0;
}