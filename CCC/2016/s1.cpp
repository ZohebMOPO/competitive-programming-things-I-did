#include<bits/stdc++.h>

using namespace std;

int main(){
    string str1;
    string str2;
    cin >> str1;
    cin >> str2;
    int letters1[26] = {0};
    int letters2[26] = {0};
    int wild = 0;
    int sum1 = 0;
    if(str1.length() == str2.length()){
        for(int i = 0; i < (int) str1.length(); i++){
            if(str2[i] == '*'){
                wild += 1;
            }else{
                letters1[str2[i] - 'a'] += 1;
            }
            letters2[str1[i] - 'a'] += 1;
        }
        int wrong = 0;
        for (int a = 0; a < 26; ++a)
         wrong += abs(letters1[a] - letters2[a]);

        if (wrong != wild)
          cout << "N";
        else
          cout << "A";
    } else {
        cout << "N";
    }
    return 0;
}