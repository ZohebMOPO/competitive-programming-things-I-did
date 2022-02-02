#include<bits/stdc++.h>

using namespace std;

int main(){
    int y;
    string save = "";
    cin >> y;
    y += 1;
    while(true){
        string year = to_string(y);
        bool tf = false;
        for(int i = 0; i < year.size(); i++){
            for(int j = i + 1; j < year.size(); j++){
                if(year[i] == year[j]){
                    tf = true;
                } else {
                    continue;
                }
            }
        }
        if(!tf){
            save = year;
            break;
        } else {
            y++;
        }
    }
    return 0;
}