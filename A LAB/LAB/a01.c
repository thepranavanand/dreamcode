#include<stdio.h>
int main ()
{
    FILE *fpointer = fopen("C:\Users\thepr\Desktop\ccamp.txt", "w");
    fprintf(fpointer, "Pranav Anand\nPrnv");
    fclose(fpointer);
    return 0;
}