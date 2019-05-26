	#include <stdio.h>//注意数组的定义（N为数组大小，数组边界为{}）
#define N 7
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int dp_pot(int a[N])
{
    int A,B;
    int b[N]={0};
    b[0]=a[0];
    b[1]=max(a[0],a[1]);
    for(int i=2;i<N;i++)
    {
        A=b[i-2]+a[i];
        B=b[i-1];
        b[i]=max(A,B);
    }
    return b[6];
}
int main(void)
{
    int a[N]={1,2,4,1,7,8,3};
    printf("%d",dp_pot(a));
    return 0;
}
