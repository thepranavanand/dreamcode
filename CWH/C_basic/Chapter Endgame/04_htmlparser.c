#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void parsed(char * html){
    int temp = 0, index = 0;
    for (int i = 0; i < strlen(html); i++)
    {
        if(html[i]=='<'){
            temp = 1;
            continue;
        } 
        else if(html[i]=='>'){
            temp = 0;
            continue;
        }

        if(temp == 0){
            html[index] = html[i];
            index++;
        }
    }

        html[index] = '\0';    
        while(html[0]==' '){
            for (int i = 0; i < strlen(html); i++)
            {
                html[i] = html[i+1];
            }
        }
        while(html[strlen(html)-1] == ' ')
        {     
                html[strlen(html)-1] = '\0';
        }
}

int main ()
{
    char html[40] = "<h1>       Hello there !!       </h1>";
    parsed(html);
    printf("the output without attributes is : [%s]",html);
    return 0;
}