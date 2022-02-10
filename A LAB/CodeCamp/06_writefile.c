#include<stdio.h>
#include<stdlib.h>

int main (){
    // FILE * fpointer = fopen("employees.txt","w"); //w overrides the file meaning it replaces the original content.
    FILE * fpointer = fopen("employees.txt","a"); // a adds information to the file.
    // file with name employees.txt will be created in the same location the current file is in. We can also custom assign the location where we want the file to be created as for example : C:\employees.txt.
     
    // fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOsca, Accounting"); 
    fprintf(fpointer, "\nPranav, SDE");
    fclose(fpointer);
} 