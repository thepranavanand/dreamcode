#include<stdio.h>
#include<string.h>

void rev(int arr[]){
    int i, temp;
    for(i = 0; i<7/2; i++){
        temp = arr[i];
        arr[i] = arr[6-i];
        arr[6-i] = temp;
    }
}
void printarr(int arr[]){
    int i;
    for(i = 0; i<7; i++){
        printf("%d ",arr[i]);
    }
}

int main (){
    int arr[7] = {7,6,5,4,3,2,1};
    rev(arr);
    printarr(arr);
    return 0;
}