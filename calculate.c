#include<stdio.h>

int main()
{
    double a,b;
    char op;
    printf("请输入算式:(例如1+1)");
    scanf("%lf%c%lf",&a,&op,&b);
    if(op=='+')
    {
        printf("%f%c%f=%f",a,op,b,a+b);
    }
    else if(op=='-')
    {
        printf("%f%c%f=%f",a,op,b,a-b);
    }
    else if(op=='*')
    {
        printf("%f%c%f=%f",a,op,b,a*b);
    }
    else if(op=='/')
    {
        if(b==0)
        {
        printf("除数不能为0");
        return 1;
        }
        else
        {
            printf("%f%c%f=%f",a,op,b,a/b);
        }
    }
    return 0;
}