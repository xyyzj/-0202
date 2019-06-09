#include<stdio.h>
#define N 5
int main()
{
	int i,a[N],j,counter=0,m=0;
	for(i=10000;i<100000;i++)
	{
	    a[0]=i%10;
	    a[1]=i/10%10;
	    a[2]=i/100%10;
	    a[3]=i/1000%10;
	    a[4]=i/10000%10;
	    for(j=0;j<5;j++)
        {
            if(a[j]==4)
                m++;//判断标识符
        }
        if(m>0)
        {
            m=0;
            continue;
        }
        counter++;
	}
     printf("%d",counter);
	return 0;
 }
