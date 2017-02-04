#include<stdio.h>




void subset(int index[], int i,int list[],int n,int ni)
{
	int j;
	if(i==n-1)
	{
		printf("\n{");
		for(j=0;j<ni;j++)
		{
			printf(" %d ",list[index[j]]);
		}
		printf("}\n");
		printf("{");
		for(j=0;j<ni;j++)
		{
			printf(" %d ",list[index[j]]);
		}
		printf("%d}",list[n-1]);
	}
	else
	{
		subset(index,i+1,list,n,ni);
		index[ni]=i;
		subset(index,i+1,list,n,ni+1);
	}
	
	
	
}




int main()
{
	int i,index[1024]={0},list[10]={0},n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&list[i]);
	}
	subset(index,0,list,n,0);
	return 0;
}
