#include<stdio.h>
#include<stdlib.h>

//Structure for node

typedef struct LIST{
	int val;
	struct LIST *next;
}node;

node* insert(node* head, int v){
	//intializing temp variables
	node *t,*t1;
	t=head;
	
	
	
	if(t==NULL){
		//Checking if list is empty to add a head
		head=malloc(sizeof(node));
		head->val=v;
		head->next=NULL;
	}
	else{
		// Creating a node for new value
		t1=malloc(sizeof(node));
		t1->val=v;
		t1->next=NULL;
		
		//Inserting the new node to the end of list
		while(t->next!=NULL){
			t=t->next;
		}
		t->next=t1;
	}
	return head;
}

int find(node* head, int v){
	int i=0;
	
	while(head!=NULL){
		if(head->val == v){
			return i;
		}
		i++;
		head=head->next;
	}
	return -1;
}




int main(){
	node *head = NULL;
	int v,i,n;
	printf("\nEnter The Number Of Elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&v);
		head=insert(head,v);
	}
	
	printf("\nEnter The Element: ");
	scanf("%d",&v);
	
	printf("\nIndex: %d",find(head,v));
	return 0;
}