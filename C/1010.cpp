#include<stdio.h>
#include<math.h>
int main()
{
	int cnt=0,t,i,n,x,m;
	scanf("%d",&n);
	t=n;
	for(;t>0;cnt++){
		t/=10;
	} 
	printf("%d\n",cnt);
    t=n,m=cnt-1;
	for(i=pow(10,cnt-1);t>0;){
		x=t/i;
		t=t%i;
		printf("%d ",x);
		i/=10;
	}
	for(x=0;n>0;m--){
		t=n%10;
		x=x+t*pow(10,m);
		n/=10;
	}
	printf("\n%d",x);
	return 0;
 } 
