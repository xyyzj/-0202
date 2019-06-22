#include <stdio.h>
int main()
{
    int i,m,n,sum=0;
    int p,flag;
    scanf("%d",&p);
    for(i=1;i<=p;i++)
    {
        flag=0;
        m=i;
        while(m)
        {
            n=m%10;
            if(n==0||n==1||n==9||n==2)//设置满足的条件
                {
                    flag=1;
                    break;
                }
            m=m/10;
        }
        if(flag==1)
        sum+=i;
    }
   printf("%d",sum);
}
