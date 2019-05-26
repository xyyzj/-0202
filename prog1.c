#include <stdio.h>//注意数组的定义（N为数组大小，数组边界为{}）
#define N 6
#define S 9
int dp_subset(int arr[])
{
    int A,B;
    int b[N][S+1]={0};
    int j,s;
    for(j=0;j<N;j++)
        b[j][0]=1;
    for(s=0;s<S+1;s++)
    {
        if(s!=arr[0])
            b[0][s]=0;
        else
            b[0][s]=1;
    }
    for(j=1;j<N;j++)
        for(s=1;s<S+1;s++)
        {
            if(arr[j]>s)
                b[j][s]=b[j-1][s];
            else
            {
                A=b[j-1][s-arr[j]];
                B=b[j-1][s];
                b[j][s]=((A || B)?1:0);
            }
        }
    return b[N-1][S];
}
int main()
{
    int arr[N]={3,34,4,12,5,12};
    printf("%d",dp_subset(arr));
    return 0;
}
