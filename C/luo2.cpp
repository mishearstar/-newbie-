#include<stdio.h>
int main()
{
	int n;
	char a[50];
	scanf("%d",&n);
	scanf("%s",a);
	for(int i=0;a[i]!='\0';i++){
		if(a[i]+n<='z'){
			a[i]=a[i]+n;
		}
		else{
			a[i]=a[i]+n-26;
		}
	}
	printf("%s",a);
	return 0;
}
