#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("要输入几个数:");
    if(scanf("%d",&n)!=1)return 1;
    int *arr=(int *)malloc(n * sizeof(int));
    if(arr==NULL){
        printf("内存不足\n");
        return 1;
    }
    printf("请输入%d个数:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    double average=(double)sum/n;
    printf("这%d个数的平均值是%.2f",n,average);
    free(arr);
    arr=NULL;
    return 0;
}