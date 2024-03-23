#include<stdio.h>
int main()
{
	int n,Sn=0,an=1,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		an=an*i;
		Sn=Sn+an;
	}
	printf("%d",Sn);
	return 0;
}
