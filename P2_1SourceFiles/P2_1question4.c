#include <stdio.h>
#include <math.h>
#include <gsl/gsl_vector.h>

int main ()

{
    
    int a,b,q,r,x,i,m,s,X,Y,W,Z,d,e,f,A,B,rem,U;
    gsl_vector*v;
    
    FILE*out=fopen("P2_1Output/question4.txt","w");
        
    printf("Enter a (the larger):");
    
    scanf("%d",&a);
    
    v=gsl_vector_alloc(30);
    
    printf("\nEnter b (the smaller):");
    
    scanf("%d",&b);
    
    A=a;
    B=b;
    
    x=0;
    
    while(b>0)
    
    {
        
        U=r;
        q=a/b;
        r=a-q*b;
        
        gsl_vector_set(v,x,q);
                
        a=b;
        b=r;
        
        ++x;
        
    }
    
    rem=U;
    
    X=0;
    W=1;
    
    Y=1;
    Z=0;
    
    r=B;
    s=A;
    
    fprintf(out,"\nr\t\t\tx\ty");
    fprintf(out,"\n%d\t\t1\t0",A);
    fprintf(out,"\n%d\t\t0\t1",B);
    
    for(i=0;i<x;++i)
    
    {
        
        q=gsl_vector_get(v,i);
        
        d=r;
        e=X;
        f=Y;
        
        r=s-q*r;
        X=W-q*X;
        Y=Z-q*Y;
        
        fprintf(out,"\n%d\t\t\t%d\t%d",r,X,Y);
        
        s=d;
        W=e;
        Z=f;
        
    }
    
    fprintf(out,"\n\nVector q: ( ");
    
    for(i=0;i<x-1;++i)
    
    {
        
        m=gsl_vector_get(v,i);
        
        fprintf(out,"%d ",m);
        
    }
    
    fprintf(out,")");
    
    fprintf(out,"\n\n%d = %d*(%d) + %d*(%d)",rem,A,W,B,Z);
        
    return 0;
    
}
        
