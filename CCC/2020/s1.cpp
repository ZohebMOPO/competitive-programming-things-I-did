#include <bits/stdc++.h>

using namespace std;

int main(){
   int n; int diff_d; int diff_t;
   cin >> n;
   vector<int> t(n);
   vector<int> d(n);
   for(int i = 0; i < n; i++){
        cin >> t[i] >> d[i];
   }
   for(int i = 0; i < n; i++){
       for(int j = i+1; j < n; j++){
           if(d[i] - d[j] > diff_d){
               diff_d = d[i] - d[j];
           }
       }
   }
   for(int i = 0; i < n; i++){
       for(int j = i+1; j < n; j++){
           if(t[i] - t[j] > diff_t){
               diff_t = d[i] - d[j];
           }
       }
   }

   int speed = diff_d / diff_t;

   cout << speed << endl;

   return 0;
}