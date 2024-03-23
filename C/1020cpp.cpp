#include<stdio.h>;
int main()
{
	double M,h,s=0;
	int n;
	scanf("%lf%d",&M,&n);
	h=M;
	for(int i=1;i<=n;i++){
		s=s+h;
		h=0.5*h;
		s=s+h;
	}
	s=s-h;
	printf("%.2lf %.2lf",h,s);
	return 0;

}
