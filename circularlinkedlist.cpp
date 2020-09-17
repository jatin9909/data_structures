#include<iostream>
#include<cstdlib>

using namespace std;

struct node{
	int data;
	struct node* next;
};
struct node *head, *newnode, *temp;

void insert(){
	int choice=1;
	head=0;
	
	while(choice){
		
	newnode= (struct node*) malloc(sizeof(struct node));
	cout<<"Enter data"<<endl;
	cin>>newnode->data;
	newnode->next=0;
	
	if(head==0){
		head=temp=newnode;
	}
	else{
		temp->next=newnode;
		temp=newnode;
	}
	temp->next=head;
	cout<<"do you want to enter more"<<endl;
	cin>>choice;
	}
}

void deletion(){
	struct node *prevnode;
	temp=head;
	while(temp->next!=head){
		prevnode=temp;
		temp=temp->next;
	}
	if(head==temp){
		head=0;
		free(temp);
	}
	else{
		prevnode->next=head;
		free(temp);
	}
}

void search(int x){
	temp=head;
	while(temp->next!=head){
		if(temp->data==x){
			cout<<"Element found"<<endl;
		}
		temp=temp->next;	
}
}

void reverse(){
	struct node *prevnode, *currnode, *nextnode;
	prevnode=0;
    currnode=nextnode=head;
    while(nextnode->next!=head){
    	nextnode=nextnode->next;
    	currnode->next=prevnode;
    	prevnode=currnode;
    	currnode=nextnode;
	}
	head=prevnode;

}

void display(){
	if(head==0){
		cout<<"list is empty"<<endl;
	}
	else{
		temp=head;
	while(temp->next!=head){
		cout<<temp->data;
		temp=temp->next;
	}
	cout<<temp->data;
	cout<<endl;
}
}


int main(){
	int n;
  cout<<"Doubly linked list"<<endl;
  insert();
  display();
  deletion();
  display();
  cout<<"Enter which number you want to search"<<endl;
  cin>>n;
  search(n); 
  reverse();
  display();



return 0;
}
