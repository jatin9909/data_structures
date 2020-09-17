#include<iostream>

using namespace std;
void display(); 

#define N 5 
int queue[N];
int front =-1;
int rear=-1; 

void enqueue(int x){
	if(front==-1 && rear==-1){
		front=rear=0;
		queue[rear]=x;
	}
	
	else if((rear+1)%N == front){
		cout<<"Queue is full";
		display(); 

	}
	
	else{
		rear=(rear+1)%N;
		queue[rear]=x;
	}
}

void dequeue(){
	if(front==-1 && rear==-1){
		cout<<"Queue is empty";
	}
	else if(front==rear){
		cout<<"Dequed element is "<<queue[front]<<endl;
		front=rear=-1;
	}
	else{
		cout<<queue[front]<<endl;
		front=(front+1)%N;
	}
}

void display(){
     
     if(front==-1 && rear==-1){
     	cout<<"Queue is empty"<<endl;
     	
	 }
	 else{
	 	cout<<"Queue is"<<endl;
	 	for(int i = front; i<rear+1; i++){
	 		cout<<queue[i]; 
		 }
	 }
}

int main(){
	int choice, x;
	
	do{
		
	cout<<"Enter choice"<<endl;
	cin>>choice;
	
	switch(choice){
		case 1: cout<<"Enter number"<<endl;
		        cin>>x;
		        enqueue(x); 
		        break;
		        
		case 2: dequeue();
		        break;     
						   
	}
	
}while(choice!=0);

display(); 

return 0;
}

