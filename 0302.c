#include <stdio.h>
#define N 777
int guess(int s,int i)
{
    if(i)
        return s*2;
    else
        return s-555;
}
int main()
{
    int n,s=N,i;
    for(i=0;i<15;i++)
    {
        scanf("%d",&n);
        s=guess(s,n);
    }
    printf("%d",s);
    return 0;
}
