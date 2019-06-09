//正确最简解法
#include<stdio.h>
int main()
{
	int num;
	for(num=1; num<1000; num++)
	{
		int num2=num*num;
		int num3=num*num*num;
		//简洁明了地体现了0-9每个数字有且只有一个的特性
		int test[10]={1,1,1,1,1,1,1,1,1,1};
		while(num2)
		{
			test[num2%10]--;
			num2=num2/10;
		}
		while(num3)
		{
			test[num3%10]--;
			num3=num3/10;
		}
		if(test[0]==0&&test[1]==0&&test[2]==0&&test[3]==0&&test[4]==0&&test[5]==0&&test[6]==0&&test[7]==0&&test[8]==0&&test[9]==0)
		{
			printf("%d\n", num);
			break;
		}
	}
	return 0;
 }

//开始的复杂冗长错误解法，直接给数组赋值在判断其唯一性，实属不可取之法
