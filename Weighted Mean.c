// C Code
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
    int n;
    scanf("%d",&n);
    long x[n];
    long w[n];
   long sum=0;
    long div=0;
    for(int i=0;i<n;i++)
        {
        scanf("%ld",&x[i]);
        
    }
    for(int i=0;i<n;i++)
        {
        scanf("%ld",&w[i]);
            }
     for(int i=0;i<n;i++)
        {
   x[i]=x[i]*w[i];     
    }
    for(int i=0;i<n;i++)
        {
        sum=sum+x[i];
        div=div+w[i];
    }
   printf("%.1f",(float)sum/div);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
