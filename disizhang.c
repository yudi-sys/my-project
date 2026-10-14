#include<stdio.h>
#include<math.h>
void PrintMulTable(void);
float Hypotenuse(float a,float b);
float AreaOfTriangle(float a,float b,float c);

void PrintMulTable(void){
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=i;j++){
            printf("%2d*%2d=%2d",j,i,i*j);
        }
        printf("\n");
    }
    return; 
}

float Hypotenuse(float a,float b){
    return sqrt(a*a+b*b);
}

float AreaOfTriangle(float a,float b,float c){
    float p,s;
    p = (a+b+c)/2;
    if(a+b>c && a+c>b && b+c>a){
        s = sqrt(p*(p-a)*(p-b)*(p-c));
    }
    else{
        return -1;
    }
    printf("%.2f",s);
    return s;
}

int main(void){
    printf("====九九乘法表====\n");
    PrintMulTable();

    float x,y,hyp;
    printf("\n请输入三角形的两条直角边：");
    scanf("%f%f",&x,&y);
    hyp = Hypotenuse(x,y);
    printf("斜边长度：%.2f\n",hyp);

    float m,n,k,area;
    printf("\n请输入三角形的三条边：");
    scanf("%f%f%f",&m,&n,&k);
    area = AreaOfTriangle(m,n,k);
    return 0;
}