#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *fileptr;
    fileptr = fopen("hello.txt","w");

    if(fileptr == NULL){
        printf("Could not open the file\n");
        return -1;
    }

    fprintf(fileptr, "This is a writing test\n");
    fprintf(fileptr, "This is another test\n");

    fclose(fileptr);

    fileptr = fopen("hello.txt","r");

    if(fileptr==NULL){
        printf("Could not open the file\n");
        return -1;
    }

    char buffer[100];

    while(fgets(buffer, sizeof(buffer),fileptr)!=NULL){
        printf("%s",buffer);
    }
    fclose(fileptr);
    return 0;
}
