#include<stdio.h>
int maxcom(int a,int b);
void minBei(int a,int b);
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d ",maxcom(a,b));
	minBei(a,b);
	return 0;
	
 } 
 int maxcom(int a,int b)
 {
 	if(b==0){
 		return a;
	 }else{
	 	int yu;
	 	for(;b!=0;){
	 		yu=a%b;
	 		a=b;
	 		b=yu;
		 }
	 	return a;
	 }
 }
 void minBei(int a,int b)
 {
 	int i=1;
 	for(;;i++){
 		if(i%a==0){
 			if(i%b==0){
 				printf("%d",i);
 				break;
			 }
		 }else{
		 	continue;
		 }	  
	 }
 }
