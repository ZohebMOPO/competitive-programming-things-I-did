#include<bits/stdc++.h>

using namespace std;

int main(){
    int k;
    cin >> k;
    int x;
    stack<int> s;
    for(int i = 0; i < k; i++){
        scanf("%i", &x);
        if(x == 0){
            s.pop();
        } else {
            s.push(x);
        }
    }

    int res = 0;
    while(!s.empty()){
        res += s.top();
        s.pop();
    }
    cout << res << endl;

    return 0;
}