#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	char a[100];
	scanf("%s",a);
	int i=0,count=0;
	for(;a[i]!='\0';i++){
		if(a[i]=='v'){
			if(a[i+1]=='k'){
				count++;
				a[i]='x';
				a[i+1]='x';
			}
		}
	}
	for(i=0;a[i]!='\0';i++){
		if(a[i]!='x'&&a[i]==a[i+1]){
			count++;
			break;
		}
	}
	printf("%d",count);
	return 0;
}
