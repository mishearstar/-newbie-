#include<stdio.h>
int main()
{
	char a;
	int litter=0,num=0,space=0,other=0;
	while((a=getchar())!='\n'){
		if(a>='0'&&a<='9')
			num++;
		else if(a==' ')
		    space++;
	    else if(a>='a'&&a<='z'||a>='A'&&a<='Z')
	        litter++;
	    else
	        other++;
	}
	printf("%d %d %d %d",litter,num,space,other);
	return 0;
}
