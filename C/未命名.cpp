#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,sum=0,t;
	scanf("%d%d",&n,&a);
	t=a;
	for(int i=1;i<=n;i++){
	 	sum=sum+t;
	 	t=t*10+a;
	} 
	 printf("%d",sum);
	 return 0;
}
