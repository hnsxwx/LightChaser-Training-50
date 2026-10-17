#include<stdio.h>

int main()
{
    int sum=0;
    for(int i=1;i<=100;i+=2){
        sum+=i;
    }
    printf("1-100的奇数和是%d",sum);
    return 0;
}