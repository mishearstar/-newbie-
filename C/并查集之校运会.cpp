#include<stdio.h>
#include<string.h>
void ori(int parent[],int n)
{
	for(int i=0;i<n;i++){     //将数组初始化为-1 
		parent[i]=-1;
	}
}
int find_root(int x,int parent[])   //用于找一个数的根 
{
	int x_root=x;
	while(parent[x_root]!=-1){
		x_root=parent[x_root];
	}
	return x_root;
}
//1-connect successfully   0-failed
int union_(int x,int y,int parent[])
{
	int x_root=find_root(x,parent);
	int y_root=find_root(y,parent);
	if(x_root==y_root){
	return 1;	
	}else{
		parent[x_root]=y_root;
		return 0;
	}
} 
int main(){
	int n,m,k;
	scanf("%d%d",&n,&m);
	int parent[n] ;
	struct people
	{
		char name[20];
		int num;
	}a[n],b[m],c[m];
	int i,j,tb,tc;
	for(i=0;i<n;i++){           //输入数据 
		scanf("%s",&a[i].name);
		a[i].num=i; 
	}
	for(j=0;j<m;j++){
		scanf("%s%s",&b[j].name,&c[j].name);
		for(i=0;i<n;i++){
			if(strcmp(a[i].name,b[j].name)==0)
			tb=i;
			if(strcmp(a[i].name,c[j].name)==0)
			tc=i;
		}
		parent[find_root(tb,parent)]=find_root(tc,parent);
	}
	scanf("%d",&k);
	for(j=0;j<k;j++){
		scanf("%s%s",&b[j].name,&c[j].name);
		for(i=0;i<n;i++){
			if(strcmp(a[i].name,b[j].name)==0)
			tb=i;
			if(strcmp(a[i].name,c[j].name)==0)
			tc=i;
		}
		if(union_(tb,tc,parent)==1)
		printf("Yes.\n");
		else
		printf("No.\n");
	}
	return 0;
} 
