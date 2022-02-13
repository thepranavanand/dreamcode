#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
    int i, j, nth_term;
    for(i = 0; i<n-3; i++)
    {
        int str[3] = {a, b, c};
        nth_term = str[0]+str[1]+str[2];
            for(j = 0; j < 2; j++)
            {
                str[j] = str[j+1];
            }
        str[2] = nth_term;
    }
    return nth_term;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}