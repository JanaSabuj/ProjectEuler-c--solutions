 #include <bits/stdc++.h>
using namespace std;

 int main() {
	//cout<<"GfG!";
	
	unsigned long long int t;
	cin>>t;
	
	while(t--)
	{
	    unsigned long long int n,k;
	    cin>>n>>k;
	    
	    string num;
	    cin>>num;
	    
	    unsigned long long int max=0;
	    for (unsigned long long int i = 0; i + k < num.length(); i++) {
	        /* code */
	        unsigned long long int prod=1;
	        
	        for (unsigned long long int j = 0; j < k; j++) {
	            /* code */
	            prod*= ((unsigned long long int) num[i+j]-'0');
	            
	            
	        }
	        
	        if(prod>=max)
	            max=prod;
	        
	        
	        
	    }
	    
	    std::cout << max << std::endl;
	    
	    
	    
	    
	}
	
	
	
	
	
	return 0;
}