#include<bits/stdc++.h>

using namespace std;

int main(){
    int K, m;
    cin >> K >> m;

	vector<int> people(K);

  for (int a = 0; a < K; ++a)
    people[a] = a + 1;

  for (int a = 0; a < m; ++a) {
    int num;
    cin >> num;

    vector<int> temp;
    for (size_t b = 0; b < people.size(); ++b) {
      if ((b + 1) % num != 0)
        temp.push_back(people[b]);
    }

    people = temp;
  }

  for (size_t a = 0; a < people.size(); ++a)
    cout << people[a] << '\n';
}