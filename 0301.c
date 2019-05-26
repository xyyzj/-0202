#include <stdio.h>
#define N 100
int main()
{
    int n,s=0;
    for(n=1;n<N+1;n++)
        s+=(n*(n+1))/2;
    printf("%d",s);
    return 0;
}
