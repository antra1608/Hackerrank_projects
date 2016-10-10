// C Code
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n;
    scanf("%d",&n);
    long a[n];
    long sum=0;
    long mi=0;
    long sigma=0;
    long b=0;
    float ans=0;
    for(int i=0;i<n;i++)
        {
        scanf("%ld",&a[i]);
        
    }
    for(int i=0;i<n;i++)
        {
        sum=sum+a[i];
    }
    mi=sum/n;
    for(int i=0;i<n;i++)
        {
        sigma=sigma+((a[i]-mi)*(a[i]-mi));
    }
    b=sigma/n;
    ans=(float)sqrt(b);
    printf("%.1f",ans);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
