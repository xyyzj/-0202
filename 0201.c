#include <stdio.h>//注意数组的定义（N为数组大小，数组边界为{}）
#define N 6
int rec_subset(int arr[],int i,int s)
{
    int A,B;
    if(s==0)
        return 1;//1代表True
    else if(i==0)
        return ((arr[0]==s)?1:0);
    else if(arr[i]>s)
        return rec_subset(arr,i-1,s);
    else
    {
       A=rec_subset(arr,i-1,s-arr[i]);
       B=rec_subset(arr,i-1,s);
       return ((A || B)?1:0);
    }
}
int main()
{
    int arr[N]={3,34,4,12,5,12};
    printf("%d",rec_subset(arr,5,9));
    return 0;
}
