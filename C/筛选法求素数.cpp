#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		a[i]=i+1;
	}
	a[0]=0;
	for(int i=2;i<n;i++){
		for(int j=2;j<n;j++){
			if(a[j]%i==0&&i!=j+1)  //防止素数本身被筛掉 
			a[j]=0;
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]!=0)
		printf("%d\n",a[i]);
	} 
	return 0;
}
