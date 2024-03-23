#include<stdio.h>
#define n 10
int main()
{
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int t=a[j];
				a[j]=a[i];
				a[i]=t;
				
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0; 
 } 
