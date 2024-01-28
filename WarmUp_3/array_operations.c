#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int nums[] = {2,4,6,8};
    int sum = 0;
    int size = sizeof(nums)/sizeof(nums[0]);
    for(int i = 0; i < size; i++)
    {
        sum += nums[i];
    }
    printf("Average: %d\n",(int)sum/size);
}