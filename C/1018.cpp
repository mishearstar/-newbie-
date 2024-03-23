#include<stdio.h>
void wan(int n);
int main()
{
	int n;
	scanf("%d",&n);
	wan(n);
	return 0;
	
 }
void wan(int n)
{
	int i=2,sum=0,m=2,a[100],j,t;
	for(m;i<=n;m++){
		i=2;
		j=0;
		sum=0;
		for(i,j;i<m;i++	){
		if(m%i==0)
		{
			sum=sum+i;
			a[j]=i;
			j++;
		}
	}
	if(sum==m){
		printf("\n %d its factors are",m);
		for(t=0;t<i;t++){
			printf(" &d",a[t]);
		}
	}
	}
}
