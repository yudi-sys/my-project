#include<stdio.h>
unsigned long int f(unsigned int n);
unsigned long int f(unsigned int n)
{
    if(n<=1){
        return 1;
    }
    else{
        return n+f(n-1);
    }
}

int main(void){
    int a;
    printf("请输入想求的求和（从1到n）：");
    scanf("%d",&a);
    unsigned long int res = f(a);
    printf("结果是：%lu",res);
}