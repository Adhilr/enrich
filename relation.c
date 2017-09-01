// Thanks to Nagarjun

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int count(int [],int,int,int,int []);
int count(int a[],int n,int c,int x,int b[])
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            b[a[i]]++;
            a[i]=0;
            if(i%2==0)
            {
                if(a[i+1]!=0)
                {
                    if(b[a[i+1]]==0)
                      c++;
                    c=count(a,n,c,a[i+1],b);
                }
            }
            else
            {
                if(a[i-1]!=0)
                {
                    if(b[a[i-1]]==0)
                     c++;
                     c=count(a,n,c,a[i-1],b);
                }
            }
        }
    }
    return c;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n+n],b[100000];
    memset(b,0,n);
    for(int i=0;i<n+n;i++)
        scanf("%d",&a[i]);
    int x;
    scanf("%d",&x);
    int c=1;
    printf("%d",count(a,n+n,c,x,b));
    
}
