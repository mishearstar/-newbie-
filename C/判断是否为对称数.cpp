#include<stdio.h>
int main()
{
	int n,i,x;
	scanf("%d",&n);
    int t=n;
	int ret=0;
	for(i=1;n>0;n=n/10){     //取出n的每一位 
		x=n%10;
	    
		ret=ret+x*i; 
		i*=10;
		
	}
	if(ret==t){
		printf("yes\n");
	}else{
		printf("no\n");
	}
	return 0;
}
	

