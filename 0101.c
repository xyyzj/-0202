#include <stdio.h>
#define N 20
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int rec_pot(int a[],int i)
{
    int A,B;
    if (i==0)
        return a[0];
    else if (i==1)
        return max(a[0],a[1]);
    else
    {
        A=rec_pot(a,i-2)+a[i];
        B=rec_pot(a,i-1);
        return max(A,B);
    }
}
int main(void)
{
    int a[N]={1,2,4,1,7,8,3};
    printf("%d",rec_pot(a,6));
    return 0;
}
