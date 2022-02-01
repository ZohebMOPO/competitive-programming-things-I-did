#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>>  pts(n + 1);
    for(int i = 0; i < n; i++){
        scanf("%i%i", &pts[i].first, &pts[i].second);
    }
    vector<pair<int, pair<int, int>>> gs;
    vector<int> dp(n+1), mtain(n+1), dist(n+1);
    for(int x = 0; x <= n; x++){
        for(int y = x + 1; y <= n; y++){
            int diff_x = pts[x].first - pts[y].second;
            int diff_y = pts[x].second - pts[y].second;
            gs.push_back({pow(diff_x,2) + pow(diff_y , 2), {x, y}});
        }
    }

    sort(gs.begin(), gs.end());
    
    for(auto p: gs){
        int d = p.first;
        auto a = p.second.first;
        auto b = p.second.second;
        if(d != dist[a]){
            dist[a] = d;
            mtain[a] = dp[a];
        } if (d != dist[b]) {
            dist[b] = d;
            mtain[b] = dp[b];
        } if (a == 0) {
            dp[a] = max(dp[a], mtain[b]);
        } else {
            dp[a] = max(dp[a], mtain[b]+1);
            dp[b] = max(dp[b], mtain[a]+1);
        }
    }
    printf("%i", dp[0]+1);
    return 0;
}