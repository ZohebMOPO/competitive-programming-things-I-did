#include <stdio.h>

int binarySearch(int arr[], int x, int low, int high){
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if(arr[mid] == x){
            return mid;
        }

        if(arr[mid] < x){
            mid += 1;
        }

        if(arr[mid] > x){
            mid -= 1;
        }
    }

    return -1;   
}