#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char words[] = "erin robertson";
    char newWords[] = "";
    int size = sizeof(words);
    for(int i = 0,j = size-1; i < j; i++,j--)
    {
        char temp = words[i];
        words[i]=words[j];
        words[j] = temp;
    }
    for(int i = 0; i < size; i++){
        printf("%c", words[i]);
    }
    printf("\n");
}
