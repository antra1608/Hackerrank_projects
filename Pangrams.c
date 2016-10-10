// C Code
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
char a[1000];
    scanf( "%[^\n]",a);
    int i=0;
   int len=strlen(a);
    a[len]='\0';
    int b[26];
    for(int i=0;i<26;i++)
        b[i]=0;
    int c;
    while(a[i]!='\0')
        {
    //    printf("%c %d ",a[i],a[i]);
        if(a[i]>= 'A' && a[i]<'Z' )
            a[i]=a[i]+32;
        //printf(" %d ",a[i]);
        c=a[i]-97;
       // printf("c %d \n",c);
        
        b[c]=1;
       // printf("b[%d]= %d",c,b[c]);
        i++;
        
    }
    
    
     //   printf("\n%s \n",a);
    int flag=1;
    for(int i=0;i<26;i++)
        {
     if(b[i]==0)
         {
         flag=0;
         break;
     }
   //     printf("%d ",b[i]);
        
    }
    
    if(flag==1)
        printf("pangram");
    else
        printf("not pangram");
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
