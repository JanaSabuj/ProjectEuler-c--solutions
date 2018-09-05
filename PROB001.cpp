#include <iostream>
using namespace std;


int multisum(int n){
	
	int p= 999/n;
	return n*((p*(p+1))/2);
	
}


int main() {
	// your code goes here
	
	int sum;
	sum= multisum(3)+ multisum(5)- multisum(15);
	cout<<sum<<"\n";
	 
	return 0;
}