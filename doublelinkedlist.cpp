#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head, *newnode, *temp;

void insert(){
	int choice=1;
	head=0;
	
	
	while(choice){
		newnode = (struct node*) malloc(sizeof(struct node));
		cout<<"Enter data"<<endl;
		cin>>newnode->data;
		
		newnode->next=0;
		newnode->prev=0;
		
		if(head==0){
			head=temp=newnode;
		}
		else{
			temp->next=newnode;
			newnode->prev=temp;
			temp=newnode;
		}
		cout<<"Do you still want to countinue"<<endl;
		cin>>choice;
		
	}
}

void deletion(){
	struct node *prevnode;
	temp=head;
	while(temp->next!=0){
		prevnode=temp;
		temp=temp->next;
	}
	if(head==temp){
		head=0;
		free(temp);
	}
	else{
		prevnode->next=0;
	    free(temp);
	}
}

void display(){
	temp=head;
	while(temp!=0){
		cout<<temp->data;
		temp=temp->next;
	}
}

void search(int n){
	temp=head;
	while(temp!=0){
		if(temp->data==n){
			cout<<"Element found"<<endl;
			
		}
		temp=temp->next;
	}
}

void reverse(){
	
	struct node*prevnode, *currnode, *nextnode;
	prevnode=0;
	currnode=nextnode=head;
	
	while(nextnode!=0){
		nextnode=nextnode->next;
		currnode->next=prevnode;
		prevnode=currnode;
		currnode=nextnode;
	}
	head=prevnode;
	
}

int main(){
	int n;
	cout<<"double linked list"<<endl;
	insert();
	display();
	
	cout<<"Element after deletion"<<endl;
	deletion();
	display();
	
	cout<<"enter the number you want to search"<<endl;
	cin>>n;
	
	search(n); 
	reverse();
	display();
	
	return 0;
}
