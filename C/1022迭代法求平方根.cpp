#include<stdio.h>
int main()
{
	double x,a;
	scanf("%lf",&x);
	a=x/2.0;
	double b;
	for(b=(a+x/a)/2;(a-b)> (1e-5)||(a-b)<-(1e-5);){
		
		a=(b+x/b)/2; 
		b=(a+x/a)/2;
		
	} 
	printf("%.3lf",b);
	return 0;
 } 
