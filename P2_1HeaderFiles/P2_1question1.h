#include <stdio.h>
#include <math.h>

int question1(float q)

{
    
    int i,n,j,x,m;
    float r;
    
    n=q;
    x=sqrt(n);

    j=1;

    for(i=2;i<=x;++i)
    
    {
        
        m=n/i;
        r=q/i;
        
        if(m-r==0)
        
        {
            
            j=0;
            
        }
        
    }
        
    
    
    if(j==1)
    
    {
        
        return 1;
        
    }
    
    else
    
    {
        
        return 0;
        
    }
    
}
