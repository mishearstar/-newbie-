#include<stdio.h>
int main()
{
	char a[1000];
	int count1=0,count2=0;
	scanf("%s",a);
	for(int t=0;a[t]!='\0';t++){
		if(a[t]=='b'){
			count1++;
			a[t]='.';
			if(a[t+1]=='o'){
				a[t+1]='.';
				if(a[t+2]=='y'){
					a[t+2]='.';
				}
			}
		}
		if(a[t]=='g'){
			count2++;
			a[t]='.';
			if(a[t+1]=='i'){
				a[t+1]='.';
		    	if(a[t+2]=='r'){
		    		a[t+2]='.';
		    		if(a[t+3]=='l'){
		    			a[t+3]='.';
					}
				}
			}
		}
	}
	for(int t=0;a[t]!='\0';t++){
		if(a[t]=='o'){
			count1++;
			a[t]='.';
			if(a[t+1]=='y'){
				a[t+1]='.';
			}
		}
		if(a[t]=='i'){
			count2++;
			a[t]='.';
			if(a[t+1]=='r'){
				a[t+1]='.';
				if(a[t+2]=='l'){
					a[t+2]='.'; 
				}
			}
		}
	}
	for(int t=0;a[t]!='\0';t++){
		if(a[t]=='y'){
			count1++;
			a[t]='.';
		}
		if(a[t]=='r'){
			count2++;
			if(a[t+1]=='l'){
				a[t+1]='.';
			} 
		}
	}
	for(int t=0;a[t]!='\0';t++){
		if(a[t]=='l')
		count2++;
	}
	printf("%d\n%d",count1,count2);
	return 0;
	
 } 
