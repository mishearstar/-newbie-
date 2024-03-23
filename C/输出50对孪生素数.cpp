#include<stdio.h>
int main()
{
	int a,i;
	int cnt=0; 
	for(a=3;cnt<50;a++){
		int isPrime=1;
		for(i=2;i<a;i++){
		if(a%i==0){
			isPrime=0;
			break;
		}
    	}
    	if(isPrime==0){
			continue;
		}
    	    int m,b=a+2;
            for(m=2;m<b;m++){
    		if(b%m==0){
    			isPrime=0;
    			break;
			}	
		}		
		if(isPrime==1){
				printf("%d %d ",a,b);
				cnt++;
			} 	
	}
	return 0;
}
