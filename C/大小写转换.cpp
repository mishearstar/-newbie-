#include<stdio.h>
int main()
{
	char a[100];
	scanf("%s",a);
	int n= sizeof(a);
	for(int i=0;i<100;i++){
		if(a[i]>='a'&&a[i]<='z'){
			a[i]=a[i]+'A'-'a';
		}
	}
	printf("%s",a);
	return 0;
 } 
