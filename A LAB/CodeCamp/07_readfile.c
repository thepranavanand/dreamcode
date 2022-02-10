#include<stdio.h>
#include<stdlib.h>

int main (){
    int linenumber;
    scanf("%d",&linenumber);
    char line[255];
    FILE *fpointer = fopen ("employees.txt","r");
    
    while(linenumber!=0){
    fgets(line, 255, fpointer);
    linenumber--;
    // fgets(line, 255, fpointer);
    }
    printf("%s",line);

    fclose(fpointer);
}