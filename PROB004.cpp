#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


long isPalin(long n)
{
    long m=n;
    long rev=0;
    while(m>0)
    {
        rev= m%10+ rev*10;
        m/=10;
    }
    
    if(rev==n)
        return 1;
    else
        return 0;
    
}

 
int main() {
    /* Enter your code here. Read input from STDIN. Prlong output to STDOUT */   
    
    long t;
    cin>>t;
    
    while(t--)
    {
        long n;
        cin>>n;
        
        long max=0;
        
        for(long i=100; i<1000; i++)
        {
            for(long j=100;j<1000;j++)
            {
                long prod=i*j;
                if(isPalin(prod) && prod<n)
                {
                    if(prod>max)
                        max=prod;
                }
                
                 
            }
        }
        
        cout<<max<<endl;
        
        
    }
    
     
    
    return 0;
}
