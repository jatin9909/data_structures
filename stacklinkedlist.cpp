#include<iostream>
#include<cstdlib>

using namespace std;

struct node{
	int data;
	struct node *next;
};
struct node *temp, *newnode, *head;

void insert(){
     int i=0; 
     
     do{
     	newnode= (struct node*) malloc(sizeof(struct node));
     	cout<<"Enter number"<<endl;
     	cin>>newnode->data;
     	newnode->next=0;
	    
	    if(head==0){
		head=temp=newnode;
	}
	else{
		temp->next=newnode;
		temp=newnode;
	}
	    
	    i++; 
	 }while(i<5);
	
}

void deletion(){
	struct node *prevnode;
	temp=head;
	int choice=1;
	
	while(temp->next!=0){
		prevnode=temp;
		temp=temp->next;
	}
	  if(temp==head){
	  	head=0;
	  	free(temp);
	  	cout<<"List is emplty"<<endl;
	  	
	  }	
	  else{
	  	prevnode->next=0;
	  	free(temp);
	   }
	   
}

void display(){
	struct node* temp;
	temp=head;
	
	if(head== NULL){
		cout<<"list is empty"<<endl;
	}
	else{
		while(temp!=0){
			cout<<temp->data;
			temp=temp->next;
		}
	}
}

int main(){
	int choice=1;
	
	cout<<"stack using Linkedlist"<<endl;
	insert();
	cout<<"Condition overflow"<<endl;
	display();
	
	cout<<"One item deleted"<<endl;
	while(choice){	
	deletion();
	cout<<"Do you want to perofrm more deletion"<<endl;
	cin>>choice;
    }
	
	display();
	
	
	return 0;
}
