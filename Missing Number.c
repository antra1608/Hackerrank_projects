#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a[10001];
    for(int i=0;i<10001;i++)
        a[i]=0;
    int n,m,index;
    scanf("%d",&m);
    for(int i=0;i<m;i++)
        {
        scanf("%d",&index);
        a[index]--;
    }
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        {
        scanf("%d",&index);
        a[index]++;
    }
    for(int i=0;i<10001;i++)
    {
        if(a[i]>0)
            printf("%d ",i);
    }
return 0;
}
