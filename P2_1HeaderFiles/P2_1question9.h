#include <P2_1declare.h>
#include <stdio.h>
#include <P2_1question3.h>
#include <P2_1question6.h>

int question9(double q,int e)

{
    
    int H,ANS;
        
    question3(q);
    
    H=(P-1)*(Q-1);
    
    e=e+H;
    
    ANS=question6(e,1.0,H);
    
    return ANS;
    
}
