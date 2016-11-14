#include <stdio.h>
#include <math.h>
#include <P2_1mulmod.h>

int main()

{
    
    int c,d,n,f,i;
    
    printf("Enter n:");
    
    scanf("%d",&n);
    
    printf("Enter c:");
    
    scanf("%d",&c);
    
    printf("Enter d:");
    
    scanf("%d",&d);
    
    f=c;
    
    for(i=1;i<d;++i)
    
    {
        
        c=c*f;
        
        c=mulmod(c,1,n);
        
    }
    
    printf("m=%d",c);
    
    return 0;
    
}
