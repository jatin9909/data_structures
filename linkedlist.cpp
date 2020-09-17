#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
	int data;
	struct node *next;
	
};
struct node *head, *newnode, *temp;
struct node *head1, *newnode1, *temp1;

void insert(){
	int choice=1;
	head=0;
	
	while(choice){
	
	newnode = (struct node *) malloc(sizeof(struct node));
	cout<<"Enter data"<<endl;
	cin >> newnode -> data;
	newnode->next=0;
	
	if(head==0){
		head=temp=newnode;
	}
	else{
		temp->next=newnode;
		temp=newnode;
	}
	cout<<"do you want to countinue"<<endl;
	cin>>choice;
	}	
}


void insert1(){
	int choice=1;
	head1=0;
	
	
	while(choice){
	
	newnode1 = (struct node *) malloc(sizeof(struct node));
	cout<<"Enter data"<<endl;
	cin >> newnode1 -> data;
	newnode1->next=0;
	
	if(head1==0){
		head1=temp1=newnode1;
	}
	else{
		temp1->next=newnode1;
		temp1=newnode1;
	}
	cout<<"do you want to countinue"<<endl;
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

void display1(){
	temp1=head1;
	while(temp1!=0){
		cout<<temp1->data;
		temp1=temp1->next;
	}
}


void search(int n){
	temp=head;
	int pos=0;
	while(temp!=0){
		
		if(temp->data==n){
			pos++;
			cout<<"Element found at "<<pos+1<<endl;
		}
		temp=temp->next;
	}
}

void reverse(){
	struct node *prevnode, *currentnode, *nextnode;
	prevnode=0;
	
	currentnode=nextnode=head;
	
	while(nextnode!=0){
		nextnode=nextnode->next;
		currentnode->next=prevnode;
		prevnode=currentnode;
		currentnode=nextnode;
	}
	
	head=prevnode;
	
	}


void concat(struct node *head, struct node *head1){
	temp=head;
	while(temp->next!=0){
		temp=temp->next;
	}
	head1=temp->next;
}

int main(){
	cout<<"Linked list"<<endl;
    int choice,n; 
    
	insert();
	display();
	
	do{
	cout<<"Item deleted"<<endl;
	deletion();	
	cout<<"Do you want to delete more item (1/0)"<<endl;
	cin>>choice;
	
    }while(choice!=0);
	
	display(); 
	
	cout<<"Enter which number you want to search"<<endl;
	cin>>n;
	search(n);
	
	cout<<"reverse list"<<endl;
	reverse();
	display(); 
	
	cout<<endl;
	cout<<"New linked list"<<endl;
	insert1();
	display1();
	
	cout<<"concatenate list"<<endl;
	concat(head, head1); 
	display();
	
	
	return 0;
}
