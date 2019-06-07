#include<stdio.h>
//其实直接将问题转换为简单的奇偶数判断问题
int main()
{
    int i,counter=0;
    for(i=21;i<51;i++)
    {
        if(i%2!=0)
            counter++;
    }
    printf("%d",counter);
    return 0;
}
