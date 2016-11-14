#include <stdio.h>
#include <math.h>

int main ()

{
    
    int n,m,k;
    double z,q,r;
    
    printf("Enter n:");
    
    scanf("%lf",&q);
    
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
            
            printf("%d ",k);
            
            q=r;
            
        }
        
        else
        
        {
            
            ++k;
            
        }
        
    }
    
    n=q;
    
    printf("%d",n);
    
    return 0;
    
}
