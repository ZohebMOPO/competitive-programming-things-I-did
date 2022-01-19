#include <bits/stdc++.h>

using namespace std;

const int inf = 1e9;


int main(){
    int N, W, D;

    cin >> N >> W >> D;

    vector<vector<int>> g(N);

    for(int i = 0; i < W; i++){
        int x, y;
        cin >> x >> y;
        --x; --y;
        g[y].push_back(x);
    }

    vector<int> p(N);

    for(int i = 0; i < N; i++){
        cin >> p[i];
        --p[i];
    }
    
    vector<int> dist(N, inf);
    dist[N - 1] = 0;
    vector<int> que(1, N - 1);
    for(int b = 0; b < (int) que.size(); b++){
        for(int to: g[que[b]]){
            if(dist[to] > dist[que[b] + 1]){
                
            }
        }
    }
}