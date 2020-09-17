#include<iostream>    //complexity is O(m+n)
#include<cstdlib>
#include<vector>


using namespace std;

void printpoly(int A[], int n){
	
	for(int i=0; i<=n; i++){
	cout<<A[i];
	if(i!=0)
	 cout<<"x^"<<i;
	 
	 if(i!=n)
	 cout<<"+";
}
}

int *add(int A[], int B[], int m, int n){
	int size= max(m,n);
	int *sum= new int[size];
	
	for(int i=0; i<=n; i++){
		sum[i]= A[i];
		
	}
	
	for(int i=0; i<=m; i++){
		sum[i]+= B[i];
	}
	
	return sum;
}



int main(){
	
	int n,m;
	
	cout<<"Enter max polynomial upto you want to add for equation 1"<<endl;
	cin>>n;
	
	cout<<"Enter max polynomial upto you want to add for equation 2"<<endl;
	cin>>m;
	
	
	int A[n], B[m];
	
	cout<<"Enter the cofficients in this order"<<'\n'
	<<"x^0+ x^1....x^n"<<endl;
	for(int i =0; i<=n; i++){
		cin>>A[i];
		
	}
	printpoly(A,n);
	
	cout<<"Enter the cofficients in this order"<<'\n'
	<<"x^0+ x^1....x^n for seconed equation"<<endl;
	for(int i=0; i<=m; i++){
		cin>>B[i];
	}
	
	printpoly(B,m); 
	
	int *sum= add(A,B,m,n);
	int size = max(m, n); 
	
	cout<<"Sum of polynomial is"<<endl;
	printpoly(sum, size); 
	
	return 0;
}
