#include <stdio.h>
#define M 30000000
int a[M];//数组存放
int main()
{
    int i;
    a[0]=1;a[1]=1;a[2]=1;
    for(i=3;i<20190324;i++)
    {
        a[i]=(a[i-3]+a[i-2]+a[i-1])%10000;//求最后四位数字
    }
    printf("%d",a[i-1]);//注意数组下标和数列下标的不同
    return 0;
}
