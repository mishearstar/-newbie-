#include<stdio.h>
#include<math.h>
int main()
{
	int n,t,m;
	
	for(n=2;n<3000;n++){
		t=n;
		for(m=0;t>0;){
		m=m+pow(t%10,3);
		t=t/10;
	}
	    if(m==n)
	    printf("%d\n",n);
	}
	return 0;
	
}		
