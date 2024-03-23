#include<stdio.h>
int main()
{
	int n,sum=1;
	scanf("%d",&n);
	for(int i=1;i<=n-1;i++){
		sum=(sum+1)*2;
	} 
	printf("%d",sum);
	return 0;
	
}
