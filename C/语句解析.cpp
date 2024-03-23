#include<stdio.h>
int main()
{
	char a[100],b[3];
	scanf("%s",a);
	int i=0;
	
	for(;a[i]!='\0';i+=5){
		switch(a[i]){
			case 'a':b[0]=a[i+3];break;
			case 'b':b[1]=a[i+3];break;
			case 'c':b[2]=a[i+3];break;
		}
	}
	for(i=0;i<3;i++){
		if(b[i]>'9'||b[i]<'0'){
			switch(b[i]){
				case 'a':b[i]=b[0];break;
				case 'b':b[i]=b[1];break; 
				case 'c':b[i]=b[2];break;
				}
		}
	}
	printf("%d %d %d",a[0]-48,a[1]-48,a[2]-48);
	return 0;
}

