#include<iostream>

using namespace std;
#define N 5

int stack[N];
int top=-1;

void push(int x){
	
	int choice=1; 
        
	if(top>=N-1){
		cout<<"Overflow"<<endl;
		
	}
	else{
		stack[++top]=x;
	}
}

void pop(){
	if(top<0){
		cout<<"Unerflow"<<endl;
	}
	else{
		int x= stack[top--];
		cout<<"Popped element is "<<x<<endl;
	}
}

void display(){
	
	if(top>=0){
	for(int i=0; i<N; i++){
		cout<<stack[i]<< " "<<endl;
	}
    }
    
    else{
    	cout<<"stack is empty"<<endl;
	}
}

int main(){
	int choice;
	int x;
	
	do{
		cout<<"Enter choice"<<endl;
		cin>>choice;
		
	switch(choice){
		
		case 1:{
	            cout<<"Enter number"<<endl;
		        cin>>x;
		        push(x);
		        break;
		    }
		case 2: pop();
		        break;        
	}
  }while(choice!=0);
	    
    
	display();
	
	/*do{
		cout<<"Do you want to remove numbers"<<endl;
		cin>>choice;
		pop();
	}while(choice);*/
	
	
	
	return 0;
}
