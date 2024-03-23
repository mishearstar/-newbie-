#include<stdio.h>
int main()
{
	int n,Sn=2;
	scanf("%d",&n);
	int an=2,i=1;

	for(;i<n;i++){
		an=an*10+2;
		Sn=Sn+an;
	}
	if(n==0)
	Sn=0;
	printf("%d",Sn);
	return 0;
}
