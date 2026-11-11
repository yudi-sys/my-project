#include <stdio.h>
int main(void){
    int a[10]={0};
    int i,j;
    long long num;
    scanf("%lld",&num);
    if(num<0){
        num=-num;
    }
    if(num==0){
        a[0]++;
    }
    else{
        while (num>0)
        {
            j=num%10;
            a[j]++;
            num=num/10;
        }
    }
    printf("Digit:	0	1	2	3	4	5	6	7	8	9\n");
    printf("Occurrences:");
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
}
