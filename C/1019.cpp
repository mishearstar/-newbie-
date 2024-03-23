#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	double a[100], b[100];
	a[0] = 2, a[1] = 3;
	b[0] = 1; b[1] = 2;
	for (int i = 2; i <= n-1; i += 1) {
		a[i] = a[i - 1] + a[i - 2];
		b[i] = b[i - 1] + b[i - 2];
	}
	double sum=0,x;
	for (int i = 0; i <= n-1; i++) {
		x = a[i] / b[i];
		sum = sum + x;
	}
	printf("%.2lf", sum);
	return 0;

}
