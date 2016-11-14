#include <stdio.h>
#include <math.h>

int question3 (double q)

{
    
    int n,m,k;
    double z,r;
    
    if(q<0)
    
    {
        
        printf("Negative number entered.");
        
    }
    
    z=q;
    k=2;

    printf("Prime factors:\t");
    
    while(q>1 && k<=sqrt(q))
    
    {
        
        n=q;
        
        m=n/k;
        r=q/k;
        
        if(m-r==0)
        
        {
            
            P=k;
                        
            q=r;
            
        }
        
        else
        
        {
            
            ++k;
            
        }
        
    }
    
    n=q;

    Q=n;
    
    return 0;
    
}
