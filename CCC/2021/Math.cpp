#include <bits/stdc++.h>

using namespace std;
const int N = (int) 250000;

int diff[N][20];

int main(){
    int n, m;

    cin >> n >> m;

    vector<tuple<int, int, int>> v;
    
    for(int i = 0; i < m; i++){
        int L,R,z;
        cin >> L >> R >> z;
        --L; --R;
        diff[L][z] += 1;
        diff[R+1][z] -= 1;
        v.emplace_back(L, R, z);        
    }
    vector<int> delta(20);
    vector<int> ans(n);

    for(int i = 0; i < n; i++){
        int val = 1;
        for(int j = 1; j <= 16; j++){
            delta[j] += diff[i][j];
        }
        for (int j = 1; j <= 16; j++) {
           if (delta[j] > 0) { 
            int num = val * j;
            val = num / __gcd(val, j);
           }
        }
        ans[i] = val;
    }
    for (auto& p : v) {
    int L, R, z;
    tie(L, R, z) = p; 
    if (st.get(L, R).gcd != z) {
      cout << "Impossible" << '\n';
      return 0;
    }
  }
  for (int i = 0; i < n; i++) {
    if (i > 0) {
      cout << " ";
    }
    cout << ans[i];
  }
  cout << '\n';
    return 0;
}