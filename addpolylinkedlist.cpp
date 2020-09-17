#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
	int pow;
	int coff;
	struct node* next;
	
};

void create(struct node **poly){
	
	int coeff, pow, cont;
	struct node *temp= (struct node*) malloc(sizeof(struct node));
	
	*poly=temp;
	
	do{
		cout<<"Enter coefficient"<<endl;
		cin>>coeff;
		
		cout<<"Enter power"<<endl;
		cin>>pow;
		
		temp->coff=coeff;
		temp->pow=pow;
		temp->next=NULL;
		
		cout<<"Have more terms 1 for y, 0 for n"<<endl;
		cin>>cont;
		
		if(cont){
			temp->next=(struct node*)malloc(sizeof(struct node));
			temp=temp->next;
			temp->next=NULL;
			
		}
		
		
		
	}while(cont);
	
	
	
}


void add(struct node **result, struct node *first, struct node *second){
	
	struct node *temp= (struct node *)malloc(sizeof(struct node));
	temp->next=NULL;
	
	*result = temp; 
	
	while(first && second){
		
		if(first->pow > second-> pow){
			temp->coff= first->coff;
			temp->pow= first->pow;
			first= first->next; 
		}
		
		else if(first-> pow < second-> pow){
			temp->coff= second->coff;
			temp->pow= second->pow;
			second= second->next; 
		}
		
		else{
			temp->coff= first->coff + second-> coff;
			temp->pow= first->pow;
			first=first->next;
			second=second->next;
		}
		
		if(first && second){
			temp->next= (struct node*) malloc(sizeof(struct node));
			temp=temp->next;
			temp->next=NULL;
		}
		
	}
	
	
	while(first || second){
		temp->next= (struct node*) malloc(sizeof(struct node));
			temp=temp->next;
			temp->next=NULL;
			
			if(first){
				temp->coff= first->coff;
			temp->pow= first->pow;
			first= first->next; 
				
			}
			
			else if(second){
				temp->coff= second->coff;
			temp->pow= second->pow;
			second= second->next; 
			}
	}
	
	
}

void show(struct node* node){
	while(node!=NULL){
		cout<<node->coff;
		cout<<"x^"<<node->pow;
		node=node->next;
		if(node!=NULL){
			cout<<" + ";
		}
	}
	cout<<endl; 
}


int main(){
	
    struct node *poly1=NULL, *poly2= NULL, *result=NULL;
    int n,m,x,y;
    
    cout<<"First polynomial"<<endl;
    create(&poly1);
    show(poly1);
    
    cout<<"Second polynomial"<<endl;
    create(&poly2);
    show(poly2);
    
    cout<<"Polynomail after adding"<<endl;
    add(&result, poly1, poly2);
    show(result);
    
    
	return 0;
}

