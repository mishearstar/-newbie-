#include<stdio.h>
int main()
{
	int a[4][5];
	int i,m=1,j=0; 
	for(i=0;i<5;i++){
		a[0][i]=m;
		m++;
	}
	m=1;
	for(i=0;i<5;i++){
		a[1][i]=m*m;
		m++;
	}
	for(m=2,i=0;i<5;i++){
		a[2][i]=m;
		m=m+2*(i+2)*2; 
	}
	for(m=3,i=0;i<5;i++){
		a[3][i]=m;
		m=m+7+4*i;
	}
	for(i=0;i<4;i++){
		j=0;
		for(;j<5;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	} 
	return 0;
	
}
