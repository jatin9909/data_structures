#include<iostream>    //linear search complexity O(n)
#include<list>        // binary search complexity O(logn)
#include<iterator>
using namespace std;

template <class T>

int linearsearch(list <int> l, int num){
	
	list <int> ::iterator it;
	
	for(it =l.begin(); it!=l.end() ; it++)
		if(*it==num)
			return 1;
	
	return -1;	
	
}

int binarysearch(list <int> l, int lo, int r, int num){
	list <int> ::iterator it;
	
	if(r>=lo){
	int mid = lo+(r-1)/2; 
	
	if(mid==num)
	 return mid; 
	 
	if(mid>num)
	 return binarysearch(l , lo, mid-1, num);
	 
	
	 return binarysearch(l, mid+1, r, num); 
	
	}
	
	return -1; 
}


int main(){
	
	int n, choice, num;
	list <int> l; 
	
	cout<<"HOw many numbers you want to enter"<<endl;
	cin>>n; 
	
	for(int i =1 ; i<=n ; i++){
		l.push_back(i);
	}
	
	list <int> ::iterator it;
	for(it = l.begin(); it != l.end(); ++it) 
        cout << *it; 
	
	
	cout<<endl; 
	cout<<"Enter which number you want to search"<<endl;
	cin>>num; 
	
	cout<<"Enter you choice"<<endl;
	cin>>choice;
	
	switch(choice){
		case 1: {cout<<"linear search"<<endl;
		        int res= linearsearch<int>(l,num);
		        if(res!=-1){
		        	cout<<"Element present "<<endl;
				}
				else
				   cout<<"Element is not present"<<endl;
			    }
				break;
		        
		case 2: {cout<<"binary search"<<endl;
		        int res1= binarysearch<int>(l,0,l.end(),num);
		  		if(res1!=-1){
		        	cout<<"Element present "<<endl;
				}
				else
				   cout<<"Element is not present"<<endl;
			    }
				break;	       
	}
	
	return 0;
}
