#include<stdio.h>
#include<stdlib.h>

int main(){
    int x;
    scanf("%i", x);
    while(x > 0){
        int n;
        scanf("%i", n);
        int arr[n];
        for(int i = 0; i < n; i++){
            scanf("%i", arr[i]);
        }
        int diff[n - 1];
        for(int i = 1; i < n; i++){
            diff[i - 1] = arr[i] - arr[i - 1]; 
        }
        int suf[n - 1];
        int pref[n - 1];
        pref[0] = 1;
        for(int i = 1; i < n; i++){
            if(diff[i] == diff[i - 1]) {
                pref[i] = pref[i - 1] + 1;
            } else {
                pref[i] = 1;
            }
        }
        suf[n - 2] = 1;
        for(int i = n - 3; i >= 0; i--){
            if(diff[i] = diff[i + 1]){
                suf[i] = suf[i + 1] + 1;
            }
        }
        int maxpref = pref[0];
        for(int i = 0; i < n - 1; i++){
            if(maxpref < pref[i]){
                maxpref = pref[i];
            }
        }
        
        x--;
    }
    return 0;
}