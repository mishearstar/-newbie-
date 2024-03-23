#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	double sum=85*n;
	if(sum>=300)
	sum*=0.85;
	printf("%lf",sum);
	return 0;
}
