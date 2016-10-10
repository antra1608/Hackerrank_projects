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
    int out[t];
    for(int a0 = 0; a0 < t; a0++){
        long n,d;
        int count=0;
        long r;
        scanf("%ld",&n);
        r=n;
        
        while(r)
            {
            d=r%10;
            r=r/10;
            if(d!=0)
                {
            if(n%d==0)
                count++;
            }
      //      printf("%d\n",count);
            
        }
        out[a0]=count;
        
        
    }
    for(int i=0;i<t;i++)
        {
        printf("%d\n",out[i]);
        
    }
    return 0;
}
