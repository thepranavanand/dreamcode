#include<stdio.h>
int i, j;
int arr[10][10];
int main (){
    for(i=0;i<3;i++){
        for(j = 0; j<3;j++){
    scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j = 0; j<3;j++){
    printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}