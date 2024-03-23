#include<stdio.h>
int main()
{
	double r,h,C1,Sa,Sb,Va,Vb;

	scanf("%lf%lf",&r,&h);
	C1=2.0*3.14*r;
	Sa=r*r*3.14;
	Sb=r*r*3.14*4;
	Va=r*r*r*3.14*4.0/3.0;
	Vb=Sa*h;
	printf("C1=%.2lf\nSa=%.2lf\nSb=%.2lf\nVa=%.2lf\nVb=%.2lf",C1,Sa,Sb,Va,Vb);
	return 0;
}
