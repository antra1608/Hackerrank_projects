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
        for(int j=0;j<n;j++)
            {
          scanf("%d",&a[j]);  
        }
        int k=0;
        int max=0;
        int min=0;
        int flag=0;
        int count=0;
        int sum=0;
        int prev=0;
        while(!flag)
            {
        while(a[k]<a[k+1] && k<n-1)
            k++;
            if(k==n-1)
                {
                flag=1;
                break;
            }
            else if(count==2)
                {
                flag=2;
                break;
            }
            else{
            if(k+2>=n && count!=2)
                {
            
                int temp=a[k-1];
            a[k-1]=a[k];
            a[k]=a[k+1];
            a[k+1]=temp;
              //printf("k %d ",k);
             k=0;
               count++;
            }else
                {
            int temp=a[k];
            a[k]=a[k+1];
            a[k+1]=a[k+2];
            a[k+2]=temp;
            k=0;
            }
            }
        }
        
        if(flag==1)
            printf("YES\n");
        else if(flag==2)
            printf("NO\n");
        
    }
    return 0;
}
