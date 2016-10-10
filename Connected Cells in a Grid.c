//C Code

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int fun(int n,int m,int a[n][m],int count,int i,int j)
    {
   // printf("i = %d  j = %d  count = %d\n",i,j,count);
     if(a[i][j]==1)
         {
         a[i][j]=0;
         count++;
      if(a[i][j+1]==1 && j+1<m)
             count=fun(n,m,a,count,i,j+1);
      if(a[i+1][j-1]==1 && i+1<n && j-1>=0)
             count=fun(n,m,a,count,i+1,j-1);
      if(a[i+1][j]==1 && i+1<n)
             count=fun(n,m,a,count,i+1,j);
      if(a[i+1][j+1]==1 && j+1<m && i+1<n)
             count=fun(n,m,a,count,i+1,j+1);
      if(a[i-1][j]==1 && i-1>=0)
             count=fun(n,m,a,count,i-1,j);
      if(a[i-1][j-1]==1 && i-1>=0 && j-1>=0)
             count=fun(n,m,a,count,i-1,j-1);
      if(a[i][j-1]==1 && j-1>=0)
             count=fun(n,m,a,count,i,j-1);
      if(a[i-1][j+1]==1 && j+1<m && i-1>=0)
             count=fun(n,m,a,count,i-1,j+1);
     
     }
    return count;
    }
int main() {

    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int a[n][m];
    for(int i=0;i<n;i++)
        {
        for(int j=0;j<m;j++)
            {
            scanf("%d",&a[i][j]);
        }
    }
   int r_max=0;
    int r=0;
     for(int i=0;i<n;i++)
        {
        for(int j=0;j<m;j++)
            {
               if(a[i][j]==1)
                r=fun(n,m,a,1,i,j);
            if(r>r_max)
                r_max=r;
        }
    }
   printf("%d",r_max-1);
    
    
        return 0;
}
