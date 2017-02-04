#include<stdio.h>

int isprime(int n)
{
	int i=6;
	while(i<n/2)
	{
		if(n%(i-1) ==0 || n%(i+1)==0)
		{
			return 0;
		}
		i+=6;
	}
	return 1;
}

int main()
{
	int n,r,t;
	scanf("%d",&n);
	n++;
	r=n%6;
	if(r==1 || r==5)
	{
		if(isprime(n))
		{
			printf("%d\n",n);
			return 0;
		}
	}

	n=(n/6)*6;
	while(1)
	{
		n+=6;
		if(isprime(n-1))
		{
			printf("%d\n",n-1);
			return 0;
		}
		if(isprime(n+1))
		{
			printf("%d\n",n+1);
			return 0;
		}
	}
}
