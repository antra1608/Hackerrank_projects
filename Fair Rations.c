// C Code
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int N,count=0;
    int nos=0;
    scanf("%d",&N);
    int *a = malloc(sizeof(int) * N);
    for(int B_i = 0; B_i < N; B_i++){
       scanf("%d",&a[B_i]);
    }
    for(int i=0;i<N;i++)
        {
        if(a[i]%2==1)
            count++;
    }
    if(count%2==1)
        {
        printf("NO");
       
    }
    else
        {
        for(int i=0;i<N;i++)
            {
            if(a[i]%2==1)
                {
                a[i]++;
                a[i+1]++;
                   nos=nos+2; 
            }
            
                
            
        }
        printf("%d",nos);
        
        
        
    }
    return 0;
}
