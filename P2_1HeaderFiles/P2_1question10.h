#include <stdio.h>
#include <math.h>


int question10(int n,int c,int d)

{
    
    int f,i;
    
    f=c;
    
    for(i=1;i<d;++i)
    
    {
        
        c=c*f;
        
        c=mulmod(c,1,n);
        
    }
    
    return c;
    
}
