#include<stdio.h>
#include<math.h>
#define PAI 3.1415926
int main()
{
	int n;
	scanf("%d",&n);
	double x=n/180.0*PAI;
	double result2=cos(x);
	
	double result1=sin(x);
	printf("cos=%lf sin=%lf",result1,result2);
	return 0;
	
}
