#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[100][100], arr_length;
    int i, j, sum1, sum2, res;

    scanf("%d", &arr_length);

    for(i = 0; i < arr_length; i++){
        for (j = 0; j < arr_length; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
    
    for(i = 0; i < arr_length; i++){
        for(j = 0; j < arr_length; j++){
           if(i == j){
            sum1 += arr[i][j];
           } 
        }
    }

    for(i = 0; i < arr_length; i++){
        sum2 += arr[i][arr_length - i - 1];
    }
    
    res = sum1 - sum2;
    if(res < 0){
        res = res * (-1);
    }
    

    printf("%d", res);

    return 0;
}