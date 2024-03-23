#include<stdio.h>
int main()
{
	int a,b,c;
	double ret;
	scanf("%d%d%d",&a,&b,&c);
	int i=1;
	for(;i<=a;i++){
		ret=ret+i;
	}
	for(i=1;i<=b;i++){
		ret=ret+i*i;
	}
	for(i=1;i<=c;i++){
		ret=ret+1.0/i;
	}
	printf("%.2lf",ret);
	return 0;
}
