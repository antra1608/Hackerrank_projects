// C Code
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
        int x=1;
        int multi=1;
        int increase=0;
        
        scanf("%d",&n);
        if(n==0)
            {
            printf("1\n");
         }
        else
            {
        for(int i=1;i<=n;i++)
            {
        if(multi==1 && increase==0)
            {
            x=x*2;
            multi=0;
            increase=1;
            
        }
            else if(multi==0 && increase==1)
            {
                x=x+1;
                multi=1;
                increase=0;
            }
            
            
        }
        printf("%d \n",x);
        }
        
    }
    return 0;
}
