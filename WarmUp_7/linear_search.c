#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int arr[] = {2,4,6,8,10};
    int target = 5;
    int i = linearSearch(arr,target);
    if(i != -1){
        printf("Element found at index: %d\n",i);
    }
    else{
        printf("Element not found\n");
    }
}

int linearSearch(int arr[], int target){
    for(int i = 0; i < sizeof(arr); i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}