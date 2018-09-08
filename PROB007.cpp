#include <bits/stdc++.h>
using namespace std;

int main() {
	//cout<<"GfG!";
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,i,count;
	    cin>>n;
	    
	    for (i = 2,count=1; count<=n; i++) {
	        /* code */
	            bool prime=true;
	        for (int j = 2; j <= sqrt(i); j++) {
	            /* code */
	            
	            if(i%j==0)
	                {
	                    prime=false;
	                    break;
	                }
	             
	        }
	        
	        if(prime)
	        count++;
	        
	    }
	    
	    
	    std::cout << i-1 << std::endl;
	    
	     
	    
	}
	
	 
	
	return 0;
}