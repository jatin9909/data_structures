#include <bits/stdc++.h>
using namespace std;

// A simple atoi() function
void myAtoi(char *str)
{
	float ipart=0.0, dpart=0.0, f=0.0,mult=0.1;

	while(*str!='.'){
		ipart=ipart*10 + ((*(str++)-'0'));
	}
	str++;
	cout<<"ipart "<<ipart<<endl;
	while(*str!='\0'){
		dpart+=((*(str++)-'0'))*mult;
		mult*=0.1;
	}
	cout<<"dpart "<<dpart<<endl;
	float sum = ipart+dpart;
	cout<<sum;
	
}

// Driver code
int main()
{
	char str[100];
	
	string s;
	cout<<"Enter the string interger "<<endl;
	cin.getline(str,sizeof(str));
	
	// Function call
	myAtoi(str);
	return 0;
}


