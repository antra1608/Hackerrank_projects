#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
        int z=n;
        while(z%3!=0)
            z-=5;
        if(z<0)
            printf("-1\n");
        else
            {
            for(int i=0;i<z;i++)
            printf("5");
            for(int i=0;i<n-z;i++)
            printf("3");
            printf("\n");
            
        }
        return 0;
        }
