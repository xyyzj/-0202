#include<stdio.h>
#define N 200
int main()
{
	int i,j;
	for(i=1;i <=N;i++)
	{
		int sum = 0;
		for(j=i;j<=N;j++)
		{
			sum+=j;
			if(sum == 236)
				printf("%d",i);
			else if(sum > 236)
			break;
		}
	}
	return 0;
}
