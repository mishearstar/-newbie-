#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int sum=a+b+c+d;
    double Average=sum/4.0;
    printf("Sum=%d;Average=%.1lf",sum,Average);
    return 0;
}
