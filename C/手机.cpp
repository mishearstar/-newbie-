#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int count=0,i=0;
	gets(a);
	for(;a[i]!='\0';i++){
		int t=0;
		if(a[i]==' ')
		count++;
		if(a[i]>='a'&&a[i]<='o'){
			t=a[i]-'a'+1;
			switch(t%3)
			{
				case 0:
					count+=3;
					break;
				case 1:
				    count+=1;
					break;
				case 2: 
					count+=2;
					break; 
			}
		}
		if(a[i]>'o'&&a[i]<='z'){
			t=a[i]-'0';
			switch(t%11){
				case 0:
					count+=4;
					break;
				case 1:
				    count+=1;
					break;
				case 2:
					count+=2;
					break;
				case 3:
					count+=3;
					break;
				case 4:
				    count+=4;
					break;
				case 5:
					count+=1;
					break;
				case 6:
					count+=2;
					break;
				case 7:
				    count+=3;
					break;
				case 8:
					count+=1;
					break;
				case 9:
					count+=2;
					break;
				case 10:
				    count+=3;
					break;
					
			}
		}
	}
	printf("%d",count);
	return 0;
 } 
