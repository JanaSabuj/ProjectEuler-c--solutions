  #include <bits/stdc++.h>
using namespace std;

long smallestFactor(long n){
	long i;
	for( i=2; i<sqrt(n); i++){
		
		if(n%i==0)
			return i;
		 
	}
	
	return n;
	
	
}





int main() {
	// your code goes here
	long n=600851475143L;
	
	while(true) {
		
	long p=smallestFactor(n);
	if(p<n)
		n/=p;
		
	else
		 break;
	  
	}
	 
	 cout<<n;
	return 0;
}