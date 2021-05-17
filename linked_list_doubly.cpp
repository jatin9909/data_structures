#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
	int data;
	struct node *next;
	struct node *prev;
};

void insert(struct node **head){
	int choice=1;
	
	while(choice){
	
	struct node *newnode = new node;
	struct node *temp;
	cout<<"Enter data"<<endl;
	cin >> newnode -> data;
	newnode->next=0;
	newnode->prev=0;
	
	if(*head==0){
		*head=temp=newnode;
	}
	
	else{
		temp->next=newnode;
		newnode->prev=temp;
		temp=newnode;
	}
	cout<<"do you want to countinue"<<endl;
	cin>>choice;
	}	
}

void insert_at_beg(struct node **head){
	struct node *newnode = new node;
	struct node *temp = *head;
	cout<<"Enter the data at beginning "<<endl;
	cin>>newnode->data;
	temp->prev=newnode;
	newnode->next=temp;
	temp=newnode;
	*head=temp;
}

void insert_at_end(struct node **head){
	struct node *newnode = new node;
	struct node *temp=*head;
	cout<<"Enter the element at the last "<<endl;
	cin>>newnode->data;
	newnode->prev=0;
	newnode->next=0;
	
	while(temp->next!=0){
		temp=temp->next;
	}
	temp->next=newnode;
	newnode->prev=temp;
	temp=newnode;
}


void insert_at_pos(struct node **head, int pos){
	int i=1; int count=1;
	struct node *length = *head;
	while(length!=0){
		length = length->next;
		count+=1;
	}
	
	if(pos>count){
		cout<<"Invalid position "<<endl;
	}
	else{
		struct node *newnode = new node;
		struct node *temp = *head;
		cout<<"Enter the data "<<endl;
		cin>>newnode->data;
		
		while(i<pos-1){
			temp=temp->next;
			i++;
		}
		newnode->prev=temp;
		newnode->next=temp->next;
		temp->next=newnode;
		newnode->next->prev=newnode;
		temp=newnode;
	}
}

void insert_after_pos(struct node **head, int pos){
	int i=1; int count=1;
	struct node *length = *head;
	while(length!=0){
		length = length->next;
		count+=1;
	}
	
	if(pos>count){
		cout<<"Invalid position "<<endl;
	}
	else{
		struct node *newnode = new node;
		struct node *temp = *head;
		cout<<"Enter the data "<<endl;
		cin>>newnode->data;
		
		while(i<pos){
			temp=temp->next;
			i++;
		}
		newnode->prev=temp;
		newnode->next=temp->next;
		temp->next=newnode;
		newnode->next->prev=newnode;
		temp=newnode;
	}
}

//node * delete_at_beg(struct node *head){
//	cout<<"Delete from beginning "<<endl;
//	node *temp = head;
//	head=head->next;
//	delete temp;
//	
//	return head;
//}
//
//node * delete_at_last(struct node *head){
//	cout<<"delete from last "<<endl;
//	 struct node *temp = head;
//	 struct node *prevnode=new node;
//	
//	while(temp->next!=0){
//		prevnode=temp;
//		temp=temp->next;
//	}
//	if(head==NULL){ //if there was only one node to be deleted
//		return NULL;
//	}
//	else{
//		prevnode->next=0;
//      	delete temp;
//    }
//	return head;
//}
//
//node * delete_at_pos(struct node *head, int pos){
//	struct node *nextnode = new node;
//	int i=1;
//	struct node *temp = head;
//	while(i<pos-1){
//		temp=temp->next;
//		i++;
//	}
//	nextnode=temp->next;
//	temp->next=nextnode->next;
//	delete nextnode;
//	return head;
//}

void display(struct node *node){
	
	while(node!=NULL){
		cout<<node->data;
		node=node->next;
	}
}


int main(){
	cout<<"Linked list"<<endl;
    int choice,n,pos,pos1;
    struct node *head=NULL;
    insert(&head);
	display(head);
	
	insert_at_beg(&head);
	display(head);
	
	insert_at_end(&head);
	display(head);
	
	cout<<"Enter the position at which you want to insert "<<endl;
	cin>>pos;
	insert_at_pos(&head,pos);
	display(head);
	
	cout<<"Enter the position after which you want to insert "<<endl;
	cin>>pos;
	insert_after_pos(&head,pos);
	display(head);
	
//	head = delete_at_beg(head);
//	display(head);
//	
//	head = delete_at_last(head);
//	display(head);
//	
//	cout<<"Enter at which position you want to delete "<<endl;
//	cin>>pos1;
//	head = delete_at_pos(head, pos1);
//	display(head);
	
	return 0;
}

