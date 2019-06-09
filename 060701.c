//注意读题，立方尾不变指的是该数=该数的立方尾
#include<stdio.h>
#include<math.h>
typedef long long ll;//因为立方值很大，故采用长整型存储
#define N 10001
int main()
{
    int i,counter=0;
    ll m;
    for(i=1;i<N;i++)
    {
       m=pow(i,3);
       if(i<10)
            if(i==(m%10))
                counter++;
              
        if(i>=10 && i<100)
            if(i==(m%100))
                counter++;
                
        if(i>=100 && i<=1000)
            if(i==(m%1000))
                counter++;

    }
    printf("%d",counter);
}
