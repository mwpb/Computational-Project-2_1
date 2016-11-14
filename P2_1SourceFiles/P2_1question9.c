#include <P2_1declare.h>
#include <stdio.h>
#include <P2_1question3.h>
#include <P2_1question6.h>

int main ()

{
    
    int H,e,ANS;
    double q;
    
    printf("Enter n:");
    
    scanf("%lf",&q);
    
    printf("Enter e:");
    
    scanf("%d",&e);
        
    question3(q);
    
    printf("\n%lf %lf",P,Q);
    
    H=(P-1)*(Q-1);
    
    printf("%d",H);
    
    e=e+H;
    
    ANS=question6(e,1.0,H);
    
    return ANS;
    
}
