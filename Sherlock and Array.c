// C Code
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
        {
        int n;
        scanf("%d",&n);
        
        int a[n];
        int flag=0;
        for(int i=0;i<n;i++)
            {
            scanf("%d",&a[i]);
        }
        if(n==1)
            {
            flag=1;
        }
        else
            {
        int left=a[0];
        int right=a[n-1];
        for(int i=2;i<n-1;i++)
        {
            right=right+a[i];
        }
        
        for(int i=1;i<n-1;i++)
            {
            if(right==left)
            
            {flag=1;
            break;
            }
                left=left+a[i];
                right=right-a[i+1];
                   }
        }
            if(flag==1)
            printf("YES\n");
        else if(flag==0)
            printf("NO\n");
        
        flag=0;
        
        }
    
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
