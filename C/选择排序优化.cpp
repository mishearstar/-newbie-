#include<stdio.h>
#define n 10  
int main()
{
	int a[n],b[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);     //Êý¾ÝÊäÈë 
	}
	int min,max;
	max=min=a[0];
	for(int i=0;i<n/2;i++){
		for(int j=i+1;j<n-i;j++){
		    if(max<a[j])
		    max=a[j];
		    if(min>a[j]){ 
		    min=a[j];} 
		    b[i]=min;
		    b[n-i-1]=max;
		}
	}
	for(int i=0;i<n;i++){
		printf("%d\n",b[i]);
	}
	return 0;
}
