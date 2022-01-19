#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int a[10000];
    for(int score_i = 0; score_i < n; score_i++){
       scanf("%d",&a[score_i]);
    }
    int i,min,max,c1,c2;
    min=a[0];
    max=a[0];
    c1=0;
    c2=0;
    for(i=1;i<n;i++)
        {
        if(a[i]>max)
            {
            c1++;
            max=a[i];
        }
        if(a[i]<min)
            {
            c2++;
            min=a[i];
        }
    }
    printf("%d %d\n",c1,c2);
    
    return 0;
}