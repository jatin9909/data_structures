#include<iostream>
#include<cstdlib>

using namespace std;

struct node{
	int data;
	struct node *next;
	
};
struct node *head, *temp, *newnode;

void create(){
	head=0; 
	int choice;
	
	while(choice){
		newnode= (struct node *)malloc (sizeof(struct node));
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
		
		cout<<"Do you want to enter more"<<endl;
		cin>>choice;
	}
	
}

void enter_front(){
	cout<<"Enter data you want to enter"<<endl;
	cin>>newnode->data;
	
	newnode->next=head;
	head=newnode;
}

void enter_last(){
	cout<<"Enter the data you want to enter"<<endl;
	cin>>newnode->data;
	
	newnode->next=0;
	temp=head;
	
	while(temp->next!=0){
		temp=temp->next;
	}
	
	temp->next=newnode;
	
}

void delete_front(){
	temp=head;
	
	head=head->next;
	free(temp);
	
	if(head->next==0){
		head=0;
		free(temp);
	}
	
}

void delete_last(){
	struct node* prevnode;
	
	temp=head;
	
	while(temp->next!=0){
		prevnode=temp;
		temp=temp->next;
	}
	
	if(temp==head){
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



int main(){
	
	int choice;
	
	create(); 
	
	do{
		cout<<"Enter choice"<<'\n'<<
		      "1. enter from front"<<'\n'<<
		       "2. enter from last"<<'\n'<<
		       "3. delete from front"<<'\n'<<
		       "4. delete from last"<<'\n'<<
			   "5. display"<<endl; 
		       
		cin>>choice; 
		
		switch(choice){
			case 1: enter_front();
			        break;
			        
			case 2: enter_last();
			        break;
					
			case 3: delete_front();
			        break;
					
			case 4: delete_last(); 
			        break;
			     
			case 5: display();
			        break;	    
			 				        
		}
		}while(choice!=0);       
	
	return 0;
	}
