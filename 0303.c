#include<stdio.h>
#define N 50
int max(int a[],int m)
{
    int n=a[0],i;
    for(i=0;i<m;i++)
        if(n<a[i])
            n=a[i];
    return n;
}
int main()
{
	int num,count=0;
	int arr[N];
	scanf("%d",&num);
	for(int i=0;i<50;i++)
	{
		int sum=0,temp;
		while(num>0)
		{
			temp=num%10;
			sum=sum+temp*temp;
			num=num/10;
		}
		arr[count++]=sum;
		printf("%d ",arr[count-1]);
		num=sum;
	}
	printf("\nmax: %d\n",max(arr,count));
	return 0;
}
