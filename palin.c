#include<stdio.h>
int main()
{
	int a[100],i=0,n,t[100],x;
    scanf("%d",&n);
    while(n!=0)
    {
        a[i]=n%10;
        t[i]=a[i];
        i++;
        n/=10;
    }
    a[n]=0;
    n=i;
    for(i=n/2;i<n;i++)
    {
        t[n-1-i]=a[i];
    }
    for(i=0;i<n/2;i++)
    {
        if(t[i]<a[i])
        {
            a[n/2]++;
            j=n/2;
            while((x=a[j]/10) !=0)
            {
                a[j]%=10;
                a[++j]++;
            }
        }
    }
}
