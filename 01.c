#include <stdio.h>
#define N 200
int main()
{
   int n,a[N],j,i,t;
   scanf("%d",&n);
   for (i=0;i<n;i++)
   {
       scanf("%d",a+i);
   }
   for(j=0;j<n;j++)
        for(i=0;i<n-j;i++)
            if(a[i]>a[i+1])
                {
                    t=a[i];
                    a[i]=a[i+1];
                    a[i+1]=t;
                }
    for(i=0;i<n;i++)
        printf(" %d",a[i]);
}
