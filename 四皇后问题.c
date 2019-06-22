//四皇后是八皇后的衍生版本，其原理都是一样的。
//四皇后说的是在4x4的国际棋盘上摆放8个皇后，
//使其不能互相攻击，即任意两个皇后都不能处于同一行、同一列或同一斜线上，
//问有多少种摆法？
#include<stdio.h>
#include<stdlib.h>
#define M 4
int queue[M] = { -1 };//用来保存4个皇后的列数
int count = 0;//方法总数
int issafe(int row, int column)//用于判断该位置是否安全
{
	for (int i = 0; i<row; i++)//遍历前面放置了皇后的行
	{
		if (queue[i] == column)return 0;//同一列不安全
		if ((row - i) == (column - queue[i]))return 0;//同一主对角线，行之差和列之差相等
		if ((row - i) + (column - queue[i])==0)return 0;//副对角线，行之差列之差的和为0
	}
	return 1;
}
 
void pickqueue(int num)
{
	for (int i = 0; i<M; i++)//遍历所有列数，找出能放的列
	{
		if (issafe(num, i))//判断当前皇后放在哪列式安全的
		{
			queue[num] = i;//保存当前列数
			if (num == 3)//满4个皇后
			{
				count++;
				for (int j = 0; j < M; j++)
				{
					printf("%3d", queue[j]);
				}
				printf("\n");
			}	
			int next = num + 1;
			pickqueue(next);//下一个皇后
		}
	}
	//遍历完所有列数后都找不到位置，即说明上一个皇后需要重新放置
	if (num==0)//若到退到0列都找不到合适位置，即返回
	{
		return;
	}
	else
	{
		queue[--num]=-1;//上一个皇后列数清除
	}
}
void main()
{
	pickqueue(0);//第一个皇后
	printf("总数为:%d", count);
	system("pause");
	return 0;
}
