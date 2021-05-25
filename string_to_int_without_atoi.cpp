#include <bits/stdc++.h>
using namespace std;

// A simple atoi() function
int myAtoi(char* str)
{
	// Initialize result
	int res = 0;
	int sign=1;
	int i=0;
	if(str[0]== '-'){
		sign*=-1;
		i++;
     }
     
	// Iterate through all characters
	// of input string and update result
	// take ASCII character of corosponding digit and
	// subtract the code from '0' to get numerical
	// value and multiply res by 10 to shuffle
	// digits left to update running total
	for (;str[i] != '\0'; ++i)
		res = res * 10 + str[i] - '0';

	// return result.
	return sign*res;
}

// Driver code
int main()
{
	char str[100];
	
	string s;
	cout<<"Enter the string interger "<<endl;
	cin.getline(str,sizeof(str));
	

	// Function call
	int val = myAtoi(str);
	cout << val;
	return 0;
}

