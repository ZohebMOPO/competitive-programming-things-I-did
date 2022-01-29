#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    deque<int> cars; 
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        cars.push_front(num);
    }
    deque<int> branch;
    int curr = 1;
    for (int b = 0; b < cars.size(); ++b) {
      if (cars[b] == curr) {
        curr += 1;
      } else if (!branch.empty() && branch.front() == curr) {
        branch.pop_front();
        curr += 1;
        b -= 1;
      } else {
        branch.push_front(cars[b]);
      }
    }
    for (size_t b = 0; b < branch.size(); ++b) {
      if (branch[b] == curr)
        curr += 1;
    }
    if (curr - 1 != n)
     cout << "N";
    else
      cout << "Y";
}

int main(){
    int t;
    cin >> t;
    while(t > 0){
        solve();
        t--;
    }
    return 0;
}