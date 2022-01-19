#include <iostream>
using namespace std;

int search(int arr[], int x, int low, int high){
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == x){
            return mid;
        }
        if(arr[mid] < x){
            mid += 1;
        }
        else if (arr[mid] > x){
            mid -= 1;
        }
    }

    return -1;
}