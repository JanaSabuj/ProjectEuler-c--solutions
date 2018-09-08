 #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    
    int t;
    cin>>t;
    
    while(t--)
    {
       int n;
        cin>>n;
        
        int prod=1;
        for(int i=2; i<=n;i++)
        {    
            bool prime=true;
            
            for(int j=2; j<=sqrt(i);j++)
            {
                
                if(i%j==0)
                {
                    prime=false;
                    break;
                     
                }
                 
            }
             
            if(prime)
            {
                int index= log(n)/log(i);
                prod*= (int) (pow(i,index));
                
                
            }
            
            
        }
        
        
        cout<<prod<<endl;
        
        
    }
    
     
    return 0;
}
