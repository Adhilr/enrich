#include<stdio.h>

void get_array(int* a,int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}

int main(){
	int n,a[100],i,m=0,m1=0;
	scanf("%d",&n);
	
	get_array(a,n);
	
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			if(a[i]>m){
				m1=m;
				m=a[i];
			}
			else if(a[i]>m1){
				m1=a[i];
			}
		}
	}
	
	printf("%d",m1);
}