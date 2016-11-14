#include <stdio.h>
#include <P2_1question9.h>
#include <P2_1question10.h>
#include <P2_1conversion.h>

int main ()

{
    
    int c,d,e,n,z,a,b;
    double q;
    char A,B;
    FILE*f=fopen("P2_1Output/question11.txt","a");
    
    /*printf("Enter n:");
    
    scanf("%lf",&q);
    */
    
    q=44147.0;
    
    n=q;
    
    /*printf("Enter e:");
    
    scanf("%d",&e);*/
    
    e=15049;
    
    printf("Enter c:");
    
    scanf("%d",&c);
    
    d=question9(q,e);
    
    z=question10(n,c,d);
        
    a=z/100;
    b=z-(100*a);
        
    A=convert(a);
    B=convert(b);
    
    fprintf(f,"%c%c",A,B);
    
    fclose(f);
        
    return 0;

}
