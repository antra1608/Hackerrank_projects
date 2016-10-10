// C Code
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
    int t;
    scanf("%d",&t);
   for(int q=0;q<t;q++)
       {
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int sub[n];
    int b[n];
    for(int i=0;i<n;i++)
        {
        int s;
        scanf("%d",&s);
        sub[i]=k-s;
    }
    for(int i=0;i<n;i++)
        {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n-1;i++)
        {
        for(int j=i;j<n;j++)
            {
            if(sub[i]>sub[j])
                {
                int temp;
                temp=sub[i];
                sub[i]=sub[j];
                sub[j]=temp;
            }
        }
    }
    
    for(int i=0;i<n-1;i++)
        {
        for(int j=i;j<n;j++)
            {
            if(b[i]>b[j])
                {
                int temp;
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    int flag=1;
    for(int i=0;i<n;i++)
        {
        if(b[i]<sub[i])
            {
            flag=0;
            break;
        }
    }
    if(flag==0)
        printf("NO\n");
    else
        printf("YES\n");
   }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
