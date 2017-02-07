#include<stdio.h>
#include<string.h>

void swap(char a[],char b[])
{
	char t[10];
	strcpy(t,a);
	strcpy(a,b);
	strcpy(b,t);
}

void sort(char a[][10],int n)
{
	int i,j,k,alen,blen;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			alen=strlen(a[i]);
			blen=strlen(a[j]);
			if(blen<alen)
			{
				swap(a[i],a[j]);
			}
			else if(alen==blen)
			{
				for(k=0;k<alen;k++)
				{
					if(a[i][k]>a[j][k])
					{
						swap(a[i],a[j]);
						break;
					}
					else if(a[i][k]>a[j][k])
					{
						break;
					}
				}
			}
		}
	}
}

int main()
{
	int i,n;
	char a[10][10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	sort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%s",a[i]);
	}
}
