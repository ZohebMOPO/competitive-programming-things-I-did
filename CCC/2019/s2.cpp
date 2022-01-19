#include<bits/stdc++.h>

using namespace std;
bool checkPrime(int a){
    int count;
    for(int i = 1; i <= a; i++){
        if(a % i == 0){
            count++;
        }
    }
    if(count == 2){
        return true;   
    }
    return false;
};

int main(){
    int n;
    cin >> n;
    vector<int> b;
    vector<int> a;
    int t[n];
    for(int i = 0; i < n; i++){
        cin >> t[i];
    }

    for(int i = 0; i < n; i++){
        while(true){
            int rukjabsdk = 3;
            if(checkPrime(rukjabsdk)){
                while(true){
                    int bruh = 3;
                    int sum = (bruh + rukjabsdk) / 2;
                    if(sum == t[i]){
                        a[i] = bruh;
                        b[i] = rukjabsdk;
                        break;
                    }
                    bruh++;
                }
            }
            rukjabsdk++;
        }
    }
    return 0;
}