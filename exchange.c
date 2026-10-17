#include<stdio.h>

int main(){
    int a=22;
    int b=36;
    int c=a;
    printf("a=%d,b=%d\n",a,b);
    int *p=&a;
    int *q=&b;
    *p=b;
    *q=c;
    printf("交换后,a=%d,b=%d",a,b);
    return 0;
}