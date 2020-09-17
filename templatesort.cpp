#include<iostream>      //insertion sort ave & worst -O(n^2), best O(n)
#include<vector>        //selection sort ave & worst & best -O(n^2)
using namespace std;    // bubble sort ave & worst -O(n^2), best O(n)

template <typename T>

T bubble(T a[], T n){
	for(int i=0; i<n; i++){
		for(int j=n-1; i<j; j--){
			if(a[j]<a[j-1])
			  swap(a[j], a[j-1]); 
		}
	}
	cout<<"sorted array"<<endl;
	for(int i=0; i<n; i++){
		cout<<a[i]<<" "; 
	}
}

template <typename T>
T insertion(T a[], T n){
	int key,j; 
	for(int i=1; i<n; i++){
		key=a[i];
		j=i-1; 
		
		while(j>=0 && a[j]>key){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
	cout<<"sorted array"<<endl;
	for(int i=0; i<n; i++){
		cout<<a[i]<<" "; 
	}
}

template <typename T>
T selection( T a[], T n){
	for(int i=0; i<n; i++){
		int min= i; 
		for(int j=i+1; j<n; j++){
			if(a[j]<a[min]){
				min=j; 
			}
		}
		swap(a[min], a[i]); 
	}
	cout<<"sorted array"<<endl;
	for(int i=0; i<n; i++){
		cout<<a[i]<<" "; 
	}
}


int main(){
	int n,choice;
	
	cout<<"Enter how many you want to enter"<<endl;
	cin>>n;
	
	int a[n];
	cout<<"Enter numbers"<<endl;
	for(int i=0; i<n; i++){
		cin>>a[i]; 
	}
	
	do{
		
	cout<<"Enter option for sorting"<<endl;
	cin>>choice;
	
	switch(choice){
		case 1: bubble<int>(a,n);
		        break;
		        
		case 2: insertion<int>(a,n);
		        break;
				
		case 3: selection<int>(a,n);
		        break;		        
	}
		
	}while(choice!=0);
	
	return 0;
}
