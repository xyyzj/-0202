#include<stdio.h>
#define N 50
//算法原理：
        //（a+5)%10=b
        // (b+5)%10=a

//加密算法
int lock(int x)
{
    int a,b,c,d;
    a=x%10;//第四位
    b=x/10%10;//第三位
    c=x/100%10;//第二位
    d=x/1000%10;//第一位
    a=(a+5)%10;
    b=(b+5)%10;
    c=(c+5)%10;
    d=(d+5)%10;
    x=a*1000+b*100+c*10+d;
	return x;

}

//解密算法
int unlock(int y)
{
    int a,b,c,d;
    a=y%10;//第四位
    b=y/10%10;//第三位
    c=y/100%10;//第二位
    d=y/1000%10;//第一位
    a=(a+5)%10;
    b=(b+5)%10;
    c=(c+5)%10;
    d=(d+5)%10;
    y=a*1000+b*100+c*10+d;
    return y;
}
int main()
{
    int x,y;
    printf("密码是:");
    scanf("%d",&x);
    printf("\n加密后的密码：%d",lock(x));
    printf("\n加密密码是:");
    scanf("%d",&y);
    printf("\n原密码是:%d",unlock(y));
    return 0;

}
