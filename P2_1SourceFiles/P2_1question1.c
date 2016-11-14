#include <stdio.h>
#include <math.h>

int main ()

{
    
    int i,j,n,x,m;
    double q,r;
    
    printf("Enter n:");
    
    scanf("%lf",&q);
    
    n=q;
    x=sqrt(n);

    j=1;

    for(i=2;i<=x;++i)
    
    {
        
        m=n/i;
        r=q/i;
        
        printf("m=%d, r=%lf\n",m,r);
        
        if(m-r==0)
        
        {
            
            j=0;
            
        }
        
    }
        
    
    
    if(j==1)
    
    {
        
        printf("Is Prime.");
        
        return 1;
        
    }
    
    else
    
    {
        
        printf("Not prime.");
        
        return 0;
        
    }
    
}
