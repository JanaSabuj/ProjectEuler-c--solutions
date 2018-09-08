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
        long n;
        cin>>n;
        
        
        long sum1= ((n*(n+1))/2)*((n*(n+1))/2);
        long sum2= (n*(n+1)*(2*n+1))/6;
        cout<<sum1-sum2<<endl;
         
        
    }
     
    return 0;
}
